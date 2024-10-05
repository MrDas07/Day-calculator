#include <iostream>
#include <string>
#include <ctime>

using namespace std;

int main()
{
    string day[] = {"SUNDAY", "MONDAY", "TUESDAY", "WEDNESDAY", "THURSDAY", "FRIDAY", "SATURDAY"};

    time_t t = time(0);
    tm *currentTime = localtime(&t);

    int currentDay = currentTime->tm_wday;

    int input;
    cout << "Enter the number of days to find the future day: ";
    cin >> input;

    int result = (currentDay + input) % 7;

    cout << "\nAll the days in a week:" << endl;
    cout << "*********************************************" << endl;
    for (int i = 0; i < 7; i++)
    {
        cout << day[i] << endl;
    }
    cout << "*********************************************" << endl;
    cout << "From today, the day after " << input << " day(s) will be: " << day[result] << endl;
    cout << "*********************************************" << endl;
    cout << "THANK YOU" << endl;

    return 0; 
  // designed by Sankar Das
}
