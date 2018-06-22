#include "plantlist.h"
#include <iostream>
#include <string>
#include <iomanip>


using namespace std;

int main()
{
    // Define a LinkedList object
    LinkedList<plant> list;

    // Define some plant objects.
    plants plant01(290518, "carrots");
    plants plant02(130418, "tulips");

    // Store the Student objects in the list.
    list.appendNode(plants01);
    list.appendNode(plants02);

    // Display the values in the list.
    cout << "Here are the plants:\n";
    list.displayList();
    cout << endl;
    system("pause");
    return 0;
}


plantlist::plantlist()
{


plantlist::~plantlist()
{

}
