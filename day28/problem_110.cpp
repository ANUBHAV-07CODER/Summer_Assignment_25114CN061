// wap to create bank account system
#include <bits/stdc++.h>
using namespace std;

struct Bank{
    int accNo;
    string name;
    float balance;
};

int main(){
    Bank b[100];
    int n = 0, choice;

    do
    {
        cout << "\n1. Create Account";
        cout << "\n2. Display Accounts";
        cout << "\n3. Deposit";
        cout << "\n4. Withdraw";
        cout << "\n5. Exit";
        cout << "\nEnter Choice: ";
        cin >> choice;

        switch(choice)
        {
        case 1:
            cout << "Enter Account Number: ";
            cin >> b[n].accNo;
            cout << "Enter Name: ";
            cin >> b[n].name;
            cout << "Enter Initial Balance: ";
            cin >> b[n].balance;
            n++;
            break;

        case 2:
            for(int i = 0; i < n; i++)
            {
                cout << "\nAccount No: " << b[i].accNo;
                cout << "\nName: " << b[i].name;
                cout << "\nBalance: " << b[i].balance << endl;
            }
            break;

        case 3:
        {
            int acc;
            float amt;
            cout << "Enter Account Number: ";
            cin >> acc;
            cout << "Enter Deposit Amount: ";
            cin >> amt;

            for(int i = 0; i < n; i++)
            {
                if(b[i].accNo == acc)
                {
                    b[i].balance += amt;
                    cout << "Updated Balance: " << b[i].balance;
                }
            }
            break;
        }

        case 4:
        {
            int acc;
            float amt;
            cout << "Enter Account Number: ";
            cin >> acc;
            cout << "Enter Withdraw Amount: ";
            cin >> amt;

            for(int i = 0; i < n; i++)
            {
                if(b[i].accNo == acc)
                {
                    if(amt <= b[i].balance)
                    {
                        b[i].balance -= amt;
                        cout << "Updated Balance: " << b[i].balance;
                    }
                    else
                    {
                        cout << "Insufficient Balance!";
                    }
                }
            }
            break;
        }

        case 5:
            cout << "Thank You!";
            break;

        default:
            cout << "Invalid Choice!";
        }

    } while(choice != 5);

    return 0;
}
