#include <iostream>
#include "plantlist.h"
#include "waterPlant.h"
#include "tempLog.h"
#include<string>
#include<stdlib.h>
#include"SerialPort.h"

using namespace std;

char output[MAX_DATA_LENGTH];
char incomingData[MAX_DATA_LENGTH];

char *port = "\\\\.\\COM9";

int main ()
{
    string newName;
    string newPassword;
    string loginName;
    string loginPassword;
    int loginAttempt = 0;


    while (loginAttempt < 3)
    {
        cout << "Please enter new user name: ";
        cin >> newName;
        cout << "Please enter new user password: ";
        cin >> newPassword;
        cout << "Enter login name: ";
        cin >> loginName;
        cout << "Enter password: ";
        cin >> loginPassword;
        if (loginName == newName && loginPassword == newPassword)
        {
            cout << "Welcome " << loginName << endl;
            // waterPlant();
            // tempLog();

            SerialPort arduino(port);
			
		if(arduino.isConnected())
		{
			cout << ", Connection to port established" << endl << endl;
		}
		else
		{
			cout << "Error in port name" << endl << endl;
		}
		
		while(arduino.isConnected())
		{
	    		cout << "Enter your command: "<< endl; // enter read_data to get humidity and temperature data from arduino
	    		string data;
	    		cin >> data;

	    		char *charArray = new char[data.size() + 1];
	    		copy(data.begin(), data.end(), charArray);
	    		charArray[data.size()] = '\n';

			arduino.writeSerialPort(charArray, MAX_DATA_LENGTH);
			arduino.readSerialPort(output, MAX_DATA_LENGTH);

	    		cout << ">> " << output << endl;

	    		delete [] charArray;
		}
	
		return 0;
    	break;
	
    	}
    	else
    	{
        	cout << "Invalid login attempt. Please try again.\n" << '\n';
        	loginAttempt++;
    	}
    }
    if (loginAttempt == 3)
    {
    	cout << "Too many login attempts! The program will now terminate.";
    	return 0;
    }
}
