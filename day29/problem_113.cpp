// wap to create menu-driven calculator
#include <bits/stdc++.h>
using namespace std;

int main(){
    int a, b, ch;

    do
    {
        cout << "\n1.Add\n2.Subtract\n3.Multiply\n4.Divide\n5.Exit\n";
        cin >> ch;

        if(ch >= 1 && ch <= 4)
        {
            cout << "Enter two numbers: ";
            cin >> a >> b;
        }

        switch(ch)
        {
            case 1: cout << "Result = " << a + b; break;
            case 2: cout << "Result = " << a - b; break;
            case 3: cout << "Result = " << a * b; break;
            case 4: cout << "Result = " << (float)a / b; break;
            case 5: cout << "Thank You!"; break;
            default: cout << "Invalid Choice";
        }

    } while(ch != 5);

    return 0;
}
