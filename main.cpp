using namespace std;
#include<iostream>
#include<string>
#include<iomanip>
#include <cstdlib>
#include <ctime>
 
        void checkDay(int);
        string name;
        string day;
 
int main()
{
        character player;
        cout << "Please enter your name" << endl;
        cin >> name;
       
        cout << "Greetings " << name << " ,and Welcome to the Regina Nightlife Simulator" << endl;
       
        srand((unsigned)time(0));
    int i;
    i = (rand()%6)+1;
       
    cout << i << ";
       
        checkDay(i);
       
       
}
 
void checkDay(int i)
{
if (i == 1)
        {
                cout << "It is a Sunday Night" << endl;
                day = "Sunday";
        }
        else if (i == 2)
        {
                cout << "It is a Monday Night" << endl;
                day = "Monday";
        }
        else if (i == 3)
        {
                cout << "It is a Tuesday Night" << endl;
                day = "Tuesday";
        }
        else if (i == 4)
        {
                cout << "It is a Wednesday Night" << endl;
                day = "Wednesday";
        }
        else if (i == 5)
        {
                cout << "It is a Thursday Night" << endl;
                day = "Thursday";
        }
        else if (i == 6)
        {
                cout << "It is a Friday Night" << endl;
                day = "Friday";
        }
        else if (i == 7)
        {
                cout << "It is a Saturday Night" << endl;
                day = "Saturday";
        }
}
