// wap to create student record system using array and string
#include <bits/stdc++.h>
using namespace std;

struct record
{
    int roll;
    string name;
    float m1, m2, m3;
    float total, per;
};

int main(){
    record r[100];
    int n = 0, choice;

    do
    {
        cout << "\n----- Student Record System -----";
        cout << "\n1. Add Student";
        cout << "\n2. Display Students";
        cout << "\n3. Search Student";
        cout << "\n4. Exit";
        cout << "\nEnter Choice: ";
        cin >> choice;

        switch(choice)
        {
            case 1:
                cout << "Enter Roll No: ";
                cin >> r[n].roll;

                cout << "Enter Name: ";
                cin >> r[n].name;

                cout << "Enter Marks of 3 Subjects: ";
                cin >> r[n].m1 >> r[n].m2 >> r[n].m3;

                r[n].total = r[n].m1 + r[n].m2 + r[n].m3;
                r[n].per = r[n].total / 3;

                n++;
                break;

            case 2:
                if(n == 0)
                {
                    cout << "No Records Found!";
                }
                else
                {
                    for(int i = 0; i < n; i++)
                    {
                        cout << "\nRoll No    : " << r[i].roll;
                        cout << "\nName       : " << r[i].name;
                        cout << "\nMarks      : "
                             << r[i].m1 << " "
                             << r[i].m2 << " "
                             << r[i].m3;
                        cout << "\nTotal      : " << r[i].total;
                        cout << "\nPercentage : " << r[i].per << "%";

                        if(r[i].per >= 40)
                            cout << "\nResult     : Pass";
                        else
                            cout << "\nResult     : Fail";
                    }
                }
                break;

            case 3:
            {
                int roll, found = 0;

                cout << "Enter Roll No: ";
                cin >> roll;

                for(int i = 0; i < n; i++)
                {
                    if(r[i].roll == roll)
                    {
                        cout << "\nRoll No    : " << r[i].roll;
                        cout << "\nName       : " << r[i].name;
                        cout << "\nMarks      : "
                             << r[i].m1 << " "
                             << r[i].m2 << " "
                             << r[i].m3;
                        cout << "\nTotal      : " << r[i].total;
                        cout << "\nPercentage : " << r[i].per << "%";

                        if(r[i].per >= 40)
                            cout << "\nResult     : Pass";
                        else
                            cout << "\nResult     : Fail";

                        found = 1;
                        break;
                    }
                }

                if(found == 0)
                    cout << "Student Not Found!";

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
