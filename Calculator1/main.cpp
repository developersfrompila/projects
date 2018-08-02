#include <iostream>
#include <windows.h>
using namespace std;

int main()


{


    int first,second;


    cout << "Simple Calculator" << endl;
    cout << "By Andrzej Gawlowski" << endl;
    cout << "All rights reserved (R)" << endl;
    cout << "It will sum, substract, multiply and divide your numbers!" << endl;
    cout << " " << endl;
    cout << " " << endl;


    cout << "Type your first number: ";
    cin >> first;


    cout << "Type your second number: ";
    cin >> second;


    cout << " " << endl;
    cout << " " << endl;


    string choose;
    int s=first+second;
    int su=first-second;
    int m=first*second;
    float d=first/second;


    cout<<"Choose the action which make sum with your numbers (sum, substract, multiply or divide. type with small letters): ";
    cin>>choose;
    if (choose=="sum")
    {
        cout << "Sum: " << first << "+" << second << "=" << s << endl;
    }


    if (choose=="substract")
    {
        cout << "Substract: " << first << "-" << second << "=" << su << endl;
    }


    if (choose=="multiply")
    {
        cout << "Multiply: " << first << "*" << second << "=" << m << endl;
    }


    if (choose=="divide")
    {
        cout << "Divide: " << first << "/" << second << "=" << d << endl;
    }
    else
        cout<<"You wrote incorrect action. Try again.";

    return 0;
}
