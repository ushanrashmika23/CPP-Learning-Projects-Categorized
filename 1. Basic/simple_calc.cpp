#include <iostream>
using namespace std;

int addtion(int x, int y)
{
    return x + y;
}
int substraction(int x, int y)
{
    return x - y;
}

int multiplication(int x, int y)
{
    return x * y;
}

int divide(int x, int y)
{
    return x / y;
}

void action(int x, int y, int choice)
{
    switch (choice)
    {
    case 1:
        cout << addtion(x, y);
        break;

    case 2:
        cout << substraction(x, y);
        break;
    case 3:
        cout << multiplication(x, y);
        break;
    case 4:
        cout << divide(x, y);
        break;
    default:
        break;
    }
}

int main()
{
    int choice;
    cout << "Enter \n for addition\n 2 for subtraction\n 3 for multiplication\n 4 for division\n"
         << endl;
    cin >> choice;
    int x, y;
    cout << "enter first number";
    cin >> x;
    cout << "enter second number";
    cin >> y;
    action(x, y, choice);
    return 0;
}
