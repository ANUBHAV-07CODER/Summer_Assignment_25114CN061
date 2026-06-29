// wap to create employee management system
#include <bits/stdc++.h>
using namespace std;

struct employee{
    int Id;
    string name;
    float salary;
};
int main(){
    employee e[100];
    int n = 0, choice;

    do
    {
        cout << "\n1. Add employee";
        cout << "\n2. Display Semployee";
        cout << "\n3. Search employee";
        cout << "\n4. Exit";
        cout << "\nEnter choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter Id No: ";
            cin >> e[n].Id;
            cout << "Enter Name: ";
            cin >> e[n].name;
            cout << "Enter salary: ";
            cin >> e[n].salary;
            n++;
            break;

        case 2:
            if (n == 0)
            {
                cout << "No records found!";
            }
            else
            {
                cout << "\nemployee Records:\n";
                for (int i = 0; i < n; i++)
                {
                    cout << "Id: " << e[i].Id
                         << "  Name: " << e[i].name
                         << "  salary: " << e[i].salary << endl;
                }
            }
            break;

        case 3:
        {
            int Id, found = 0;
            cout << "Enter Roll No to Search: ";
            cin >> Id;

            for (int i = 0; i < n; i++)
            {
                if (e[i].Id == Id)
                {
                    cout << "Id: " << e[i].Id
                         << "\nName: " << e[i].name
                         << "\nsalary: " << e[i].salary << endl;
                    found = 1;
                    break;
                }
            }

            if (found == 0)
                cout << "employee not found!";
            break;
        }

        case 4:
            cout << "Exiting...";
            break;

        default:
            cout << "Invalid Choice!";
        }

    } while (choice != 4);

    return 0;
}
