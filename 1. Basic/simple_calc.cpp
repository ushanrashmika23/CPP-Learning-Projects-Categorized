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
        if(x==0 || y==0){
            cout<<"Can't divide 0...";
        }else{
            cout << divide(x, y);
        }
        break;
    default:
        break;

    }
}

int main()
{
    int choice;
    cout << "Enter";
    cout << " \n 1 for addition\n 2 for subtraction\n 3 for multiplication\n 4 for division\n:";
    cin >> choice;
    if(choice>=1 && choice<=4 )
    {
        int x, y;
        cout << "enter first number:  " << endl;
        cin >> x;
        cout << "enter second number:  " << endl;
        cin >> y;
        action(x, y, choice);
    }else{
        cout<<"Invalid Option...";
        return 0;
    }
    return 0;
}
