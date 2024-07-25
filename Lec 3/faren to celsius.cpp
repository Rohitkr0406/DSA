#include<iostream>
using namespace std;

int main()
{
    float f;
    cout<<"Enter the farenheit value: ";
    cin>>f;

    float c= 5.0/9*(f-32);
    cout<<"The temperature in celsuis: "<<c;

    return 0;

}