#include <iostream>
using namespace std;
int main()
{
    // Variables:
    
int distance = 0, hours_traveled, speed;

    // Get the speed in mph. It cannot be negative.
    cout 

<< "What is the speed of the vehicle in mph? ";
    while(!(cin >> speed) || (speed < 0))
    
    if (speed < 0)
    {
        cout << "ERROR: Speed must be equal to or greater than 0." << endl;
        cin.clear();
        cin.ignore(2000, '\n');
    }

    // Get the hours traveled. Minimun of 1 hour.
    cout << "How many hours has it traveled? ";
    while(!(cin >> hours_traveled) || (hours_traveled < 1))
    
    if (hours_traveled < 10)
    {
        cout << "ERROR: Hours traveled must be greater than 1." << endl;
        cin.clear();
        cin.ignore(2000, '\n');
    }

    // Display a small table listing the data 
    // that was just calculated for the user.
    cout << "Hour   Distance Traveled" << endl;
    cout << "------------------------" << endl;
    
    for (int t = 0; t < hours_traveled; t++)
    {
        distance += speed;
        cout << "   " << (t + 1) << "   " << distance << endl;
    }

    return 0;
}