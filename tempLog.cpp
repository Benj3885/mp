#include "tempLog.h"
#include <iostream>

using namespace std;

tempLog::tempLog()

{
   cout << "::::::::::GREENHOUSE TEMPERATURE PAST 5 DAYS::::::::::: "<< endl;

   int temppastdays[5] = {23,19,16,26,14}; // temperature for last 1-5 days ago

   cout << temppastdays[0] << " Celcius" << endl; // shows the temperature 1 days ago
   cout << temppastdays[1] << " Celsius" << endl ; // shows the temperature 2 days ago
   cout << temppastdays[2] << " Celsius" << endl; // shows the temperature 3 days ago
   cout << temppastdays[3] << " Celcius" << endl; // shows the temperature 4 days ago
   cout << temppastdays[4] << " Celcius" << endl; // shows the temperature 5 days ago

}


