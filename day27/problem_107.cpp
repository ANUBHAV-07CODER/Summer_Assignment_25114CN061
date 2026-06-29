// wap to create salary management system
#include <bits/stdc++.h>
using namespace std;

struct Salary
{
    int id;
    string name;
    float salary;
};
int main()
{
    Salary s[100];
    int n = 0, choice;

    do
    {
        cout << "\n1.Add Salary Record";
        cout << "\n2.Display Salary Records";
        cout << "\n3.Search Salary";
        cout << "\n4.Exit";
        cout << "\nEnter Choice: ";
        cin >> choice;

        switch(choice)
        {
        case 1:
            cout << "Enter Employee ID: ";
            cin >> s[n].id;
            cout << "Enter Name: ";
            cin >> s[n].name;
            cout << "Enter Salary: ";
            cin >> s[n].salary;
            n++;
            break;

        case 2:
            for(int i = 0; i < n; i++)
            {
                cout << "\nID: " << s[i].id;
                cout << "\nName: " << s[i].name;
                cout << "\nSalary: " << s[i].salary << endl;
            }
            break;

        case 3:
        {
            int id, found = 0;
            cout << "Enter Employee ID: ";
            cin >> id;

            for(int i = 0; i < n; i++)
            {
                if(s[i].id == id)
                {
                    cout << "\nID: " << s[i].id;
                    cout << "\nName: " << s[i].name;
                    cout << "\nSalary: " << s[i].salary << endl;
                    found = 1;
                    break;
                }
            }

            if(found == 0)
                cout << "Record not found";
            break;
        }

        case 4:
            cout << "Thank You!";
            break;

        default:
            cout << "Invalid Choice";
        }

    } while(choice != 4);

    return 0;
}
