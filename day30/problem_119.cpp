// wap to create mini employee management system
#include<bits/stdc++.h>
using namespace std;

struct employee{
    int Id;
    string name;
    string department;
    float salary;
};

int main(){
    employee e[100];
    int n = 0, choice;

    do
    {
        cout << "\n---Employee Management System---";
        cout << "\n1. Add record";
        cout << "\n2. Display record";
        cout << "\n3. Search record";
        cout << "\n4. Exit";
        cout << "\nEnter choice: ";
        cin >> choice;

        switch(choice)
        {
            case 1:
                cout << "Enter Id: ";
                cin >> e[n].Id;

                cout << "Enter name: ";
                cin >> e[n].name;

                cout << "Enter department: ";
                cin >> e[n].department;

                cout << "Enter salary: ";
                cin >> e[n].salary;

                n++;
                break;

            case 2:
                for(int i = 0; i < n; i++)
                {
                    cout << "\nEmployee Id: " << e[i].Id;
                    cout << "\nEmployee Name: " << e[i].name;
                    cout << "\nEmployee Department: " << e[i].department;
                    cout << "\nEmployee Salary: " << e[i].salary << endl;
                }
                break;

            case 3:
            {
                int id, found = 0;

                cout << "Enter Id: ";
                cin >> id;

                for(int i = 0; i < n; i++)
                {
                    if(e[i].Id == id)
                    {
                        cout << "\nEmployee Id: " << e[i].Id;
                        cout << "\nEmployee Name: " << e[i].name;
                        cout << "\nEmployee Department: " << e[i].department;
                        cout << "\nEmployee Salary: " << e[i].salary << endl;

                        found = 1;
                        break;
                    }
                }

                if(found == 0)
                {
                    cout << "Not Found!";
                }

                break;
            }

            case 4:
                cout << "Thank You!";
                break;

            default:
                cout << "Invalid Choice!";
        }

    } while(choice != 4);

    return 0;
}
