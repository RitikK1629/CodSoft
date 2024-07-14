#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    int sn, gs, as = 0, ma, mr, n;
    cout << "WELCOME TO GAME OF NUMBER GUESSING YAY!" << endl;
    cout << "CHOOSE THE DIFFICULTY LEVEL" << endl;
    cout << "PRESS 1 FOR VERY EASY" << endl;
    cout << "PRESS 2 FOR EASY" << endl;
    cout << "PRESS 3 FOR MEDIUM" << endl;
    cout << "PRESS 4 FOR ULTRA HARD PRO MAX" << endl;
    cin >> n;
    switch (n)
    {
    case 1:
        ma = 7;
        mr = 15;
        break;
    case 2:
        ma = 7;
        mr = 100;
        break;
    case 3:
        ma = 10;
        mr = 500;
        break;
    case 4:
        ma = 5;
        mr = 1000;
        break;
    default:
        cout << "PLEASE CHOOSE A VALID OPTION" << endl;
        return 0;
    }
    srand(static_cast<unsigned int>(time(0)));
    sn = rand() % mr + 1;
    cout << "RANDOM NUMBER BETWEEN 1 AND " << mr << "." << endl;
    cout << "TRY AND GUESS " << ma << " MAXIMUM ATTEMPTS YOU HAVE" << endl;
    while (as < ma)
    {
        cout << "ATTEMPT " << as + 1 << " GUESS THE NUMBER: ";
        cin >> gs;
        if (gs == sn)
        {
            cout << "CONGRATULATIONS! YOU GUESSED THE NUMBER." << endl;
            break;
        }
        else if (gs < sn)
        {
            cout << "TOO LOW. TRY AGAIN." << endl;
        }
        else
        {
            cout << "TOO HIGH. TRY AGAIN." << endl;
        }
        as++;
    }
    if (as == ma)
    {
        cout << "YOU LOST! TRY AGAIN." << endl;
        cout << "BUT LET ME TELL YOU THE SECRET NUMBER: " << sn << endl;
    }
    cout << "THANKS FOR PLAYING THE NUMBER GUESSING GAME!" << endl;
    return 0;
}
