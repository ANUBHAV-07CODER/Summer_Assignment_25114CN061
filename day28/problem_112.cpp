// wap to create contact management system
#include <bits/stdc++.h>
using namespace std;

struct Contact{
    string name;
    long long phone;
};

int main(){
    Contact c[100];
    int n = 0, choice;

    do
    {
        cout << "\n1. Add Contact";
        cout << "\n2. Display Contacts";
        cout << "\n3. Search Contact";
        cout << "\n4. Exit";
        cout << "\nEnter Choice: ";
        cin >> choice;

        switch(choice)
        {
        case 1:
            cout << "Enter Name: ";
            cin >> c[n].name;
            cout << "Enter Phone Number: ";
            cin >> c[n].phone;
            n++;
            break;

        case 2:
            for(int i = 0; i < n; i++)
            {
                cout << "\nName: " << c[i].name;
                cout << "\nPhone: " << c[i].phone << endl;
            }
            break;

        case 3:
        {
            string name;
            int found = 0;

            cout << "Enter Name: ";
            cin >> name;

            for(int i = 0; i < n; i++)
            {
                if(c[i].name == name)
                {
                    cout << "\nName: " << c[i].name;
                    cout << "\nPhone: " << c[i].phone << endl;
                    found = 1;
                    break;
                }
            }

            if(found == 0)
                cout << "Contact Not Found!";
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
