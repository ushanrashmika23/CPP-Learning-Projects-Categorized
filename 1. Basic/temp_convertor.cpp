#include<iostream>
using namespace std;

float c2f(float temp)
{
    return temp*(9/5)+32;
}
float f2c(float temp)
{
    return (temp-32)*(5/9);
}
int main()
{
    cout<<"Enter Option: \n 1 for Celsius to Farenheit \n 2 for Farenheit to Celsius"<<endl;
    int choice;
    cin >> choice;
    cout<<"Enter Temp:  ";
    float temp;
    cin>>temp;
    if(choice==1)
    {
        cout<<"Celsius to Farenheit"<<endl;
        cout<<(float)c2f(temp);
    }
    else if(choice==2)
    {
        cout<<"Farenheit to Celsius"<<endl;
        cout<<(float)f2c(temp);
    }
    else
    {
        cout<<"Invalid Option...";
    }
    return 0;
}
