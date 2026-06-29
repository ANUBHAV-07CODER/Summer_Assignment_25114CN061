// wap to create library management system
#include <bits/stdc++.h>
using namespace std;

struct book{
    int id;
    string name;
    string author;
};

int main(){
    book b[100];
    int n = 0, choice;

    do
    {
        cout << "\n1.Add book";
        cout << "\n2.Display book";
        cout << "\n3.Search book";
        cout << "\n4.Exit";
        cout << "\nEnter Choice: ";
        cin >> choice;

        switch(choice)
        {
        case 1:
            cout << "Enter book ID: ";
            cin >> b[n].id;
            cout << "Enter book Name: ";
            cin >> b[n].name;
            cout << "Enter author name: ";
            cin >> b[n].author;
            n++;
            break;

        case 2:
            for(int i = 0; i < n; i++)
            {
                cout << "\nbook ID: " << b[i].id;
                cout << "\nbook Name: " << b[i].name;
                cout << "\nauthor: " << b[i].author << endl;
            }
            break;

        case 3:
        {
            int id, found = 0;
            cout << "Enter book ID: ";
            cin >> id;

            for(int i = 0; i < n; i++)
            {
                if(b[i].id == id)
                {
                    cout << "\nbook ID: " << b[i].id;
                    cout << "\nbook Name: " << b[i].name;
                    cout << "\nauthor: " << b[i].author << endl;
                    found = 1;
                    break;
                }
            }

            if(found == 0)
                cout << "book not found";
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
