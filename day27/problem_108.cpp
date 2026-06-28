// wap to create marksheet generation system
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string name;
    int roll;
    float m1, m2, m3, total, per;

    cout << "Enter Name: ";
    cin >> name;

    cout << "Enter Roll No: ";
    cin >> roll;

    cout << "Enter Marks of 3 Subjects: ";
    cin >> m1 >> m2 >> m3;

    total = m1 + m2 + m3;
    per = total / 3;

    cout << "\n----- Marksheet -----\n";
    cout << "Name      : " << name << endl;
    cout << "Roll No   : " << roll << endl;
    cout << "Subject 1 : " << m1 << endl;
    cout << "Subject 2 : " << m2 << endl;
    cout << "Subject 3 : " << m3 << endl;
    cout << "Total     : " << total << endl;
    cout << "Percentage: " << per << "%" << endl;

    if (per >= 40)
        cout << "Result    : Pass";
    else
        cout << "Result    : Fail";

    return 0;
}
