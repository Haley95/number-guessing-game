#include <iostream>
using namespace std;
int main()
{
int guess;
const int MIN = 0;
const int MAX = 10;
int number = (rand() % 10) + 1;
srand(0);

while (number != guess)
{
    cout<< "Please guess a number between 1 and 10: ";
    cin >> guess;
    if (number > guess)
    {
    cout<< "Your number was too low, try again." << endl;
    }
    else if (number < guess)
    {
        cout<< "Your number was too high, try again." << endl;
    }
    else 
    {
        cout<< "Correct guess!";
        break;
    }
}
    return 0;
}
