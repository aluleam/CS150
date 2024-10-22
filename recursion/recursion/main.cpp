//****************************************************
// Program:     recursion.cpp
// Course:      CSC 150
// Date:        Apr 2023
// Description: This program will introduce recursion.
//****************************************************
#include <iostream>
using namespace std;

//function prototypes
void display(int num);

int main()
{
    int x = 0;

    cout << "Enter an integer: ";
    cin >> x;

    display(x);
    return 0;
}

void display(int num)
{
    cout << "Start of display function: num = " << num << "\n";

    if (num == 0) //base case
    {
        cout << "End of display function: num = " << num << endl;
        return;
    }
    else //recursive case
    {
        display(num - 1); //recursive call
    }

    cout << "End of display function: num = " << num << endl;
    return;
}

