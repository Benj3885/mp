#include "plantlist.h"
#include <iostream>
#include <fstream>


using namespace std;


plantlist::plantlist()
{
  cout << " " << endl << "Your Plants.  " ;

    {

        string newPlantName;
        string newPlantDate;
        string plantName;
        string plantDate;
        int searchAttempt = 0;


        while (searchAttempt < 3)
        {
            cout << "Please enter a plant: ";
            cin >> newPlantName;
            cout << "Please enter the date which plant has been sowed: ";
            cin >> newPlantDate;
            cout << "Search plant: ";
            cin >> plantName;
            if (plantName == newPlantName || plantDate == newPlantDate)
            {
                cout << "Your plant has been found: " << (plantName + "  " + newPlantDate);

                break;
            }

            else
            {
                cout << "Invalid search attempt. Please search for another plant.\n" << '\n';
                searchAttempt++;
            }
        }
    }
}
