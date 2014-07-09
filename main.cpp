using namespace std;
#include<iostream>
#include<string>
#include<iomanip>
#include <cstdlib>
#include <ctime>

int health = 100;
int drunklevel=0;
int happiness=50;
int racisimlevel=0;
int tindermatches=0;
int money=50;
int condomCount=2;
int confidence =0;
int level=0;

void checkDay(int);
string name;
string day;

void MainMenu();

void mondayNight();
void tuesdayNight();
void wednesdayNight();
void thursdayNight();
void fridayNight();
void saturdayNight();
void sundayNight();


int main()
{
    cout << "Please enter your name" << endl;
    cin >> name;
    
    cout << "Greetings " << name << ", and Welcome to the Regina Nightlife Simulator" << endl;
    cout << "You groggily wake up and check the day of the week" << endl << endl << endl;
    
    srand((unsigned)time(0));
    int i;
    i = (rand()%6)+1;
    
    checkDay(i);
    
    
}

void checkDay(int i)
{
    if (i == 1)
    {
        cout << "It is a Sunday Night" << endl;
        day = "Sunday";
        sundayNight();
    }
    else if (i == 2)
    {
        cout << "It is a Monday Night" << endl;
        day = "Monday";
        mondayNight();
    }
    else if (i == 3)
    {
        cout << "It is a Tuesday Night" << endl;
        day = "Tuesday";
        tuesdayNight();
    }
    else if (i == 4)
    {
        cout << "It is a Wednesday Night" << endl;
        day = "Wednesday";
        wednesdayNight();
    }
    else if (i == 5)
    {
        cout << "It is a Thursday Night" << endl;
        day = "Thursday";
        thursdayNight();
    }
    else if (i == 6)
    {
        cout << "It is a Friday Night" << endl;
        day = "Friday";
        fridayNight();
    }
    else if (i == 7)
    {
        cout << "It is a Saturday Night" << endl;
        day = "Saturday";
        saturdayNight();
    }
    cout << endl;
}

void MainMenu()
{
    
    
    
    
    
    
}

void sundayNight(string day)
{
    char choice;
    
    cout << "It is " << day << " night" << endl;
    cout << " You have a couple options this beautiful night in the Queen City " << endl;
    cout << " 1. Casino Regina " << endl;
    cout << " 2. Go to Church"  << endl;
    cout << " 3. Attempt to go to Dancers" << endl;
    cout << " 4. House Party" << endl;
    cout << " 5. Trivia at O'Hans" << endl;
    cout << " 6. Get Scooped by the Duggle" << endl << endl << endl;

    cin >> choice;
    
    switch (choice) {
        case '1':
            cout << "You have chosen the Casino Regina";
            break;
        case '2':
            cout << "You have chosen to go to church";
            break;
        case '3':
            cout << "You have chosen to attempt to go to Dancers";
            break;
        case '4':
            cout << "You have chosen to go to a House Party";
            break;
        case '5':
            cout << "You have chosen to do Trivia at O'Hans";
            break;
        case '6':
            cout << "Jim swings by and you hop into his '93 Buick LeSabre";
            break;

    }
}
