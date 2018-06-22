#include "waterPlant.h"
#include <iostream>
#include <fstream>

using namespace std;

waterPlant::waterPlant()
{
    cout << " " << endl << "::::::::::::::::::WATERING TIMESHEET:::::::::::::::::" << '\n';

    {
    /*




    ofstream file_;
    file_.open("waterSchedule.txt");
    file_ << "Rose_____________________Monday May 17th" <<'\n';
    file_ << "Carrots__________________Thursday May 23rd" << '\n';
    file_ << "Tomatoes_________________Wednesday June 1st" << '\n';
    file_ << "Potatoes_________________Friday June 8th" << '\n';

    file_.close();

    */
    std::string line_;
    ifstream file_("waterSchedule.txt");
    if(file_.is_open())
    {
        while(getline(file_, line_))
        {
            std::cout<<line_<< '\n';
        }
        file_.close();

    }
    else
        std::cout<<"the file is not open"<< '\n';

    std::cin.get();
    }
}


