#include <iostream>
#include <windows.h>
using namespace std;

int main()

{

    int first,second;



    int selection;

    cout << "Simple Calculator" << endl;
    cout << "By Andrzej Gawlowski" << endl;
    cout << "All rights reserved (R)" << endl;
    Sleep(1000);
    cout << "Wait.";
    Sleep(1000);
    cout << ".";
    Sleep(1000);
    cout << "." << endl;
    Sleep(1000);
    cout << "It will sum, substract, multiply and divide your numbers!" << endl;
    cout << " " << endl;
    cout << " " << endl;

    cout << "Type your first number: ";
    cin >> first;

    cout << "Type your second number: ";
    cin >> second;

    cout << " " << endl;
    cout << " " << endl;

    cout << "What do you want to do with it?" << endl;
    cout << "<1> for sum, <2> for substract, <3> for multiply, <4> for divide" << endl;
    cout << "Your selection: ";
    cin >> selection;

    cout << " " << endl;
    cout << " " << endl;

    int s=first+second;
    int su=first-second;
    int m=first*second;
    float d=first/second;

    if (selection==1)

    {
        cout << "Sum: " << first << "+" << second << "=" << s << endl;
    }

    if (selection==2)
    {
        cout << "Substract: " << first << "-" << second << "=" << su << endl;
    }

    if (selection==3)
    {
        cout << "Multiply: " << first << "*" << second << "=" << m << endl;
    }

    if (selection==4)
    {
        cout << "Divide: " << first << "/" << second << "=" << d << endl;
    }


    return 0;
}
