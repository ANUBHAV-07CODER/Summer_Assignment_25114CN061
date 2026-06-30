// wap to create mini library system
#include <bits/stdc++.h>
using namespace std;

struct Library{
    int memberId;
    string memberName;
    int bookId;
    string bookName;
    int quantity;
};

int main(){
    Library l[100];
    int n = 0, choice;

    do
    {
        cout << "\n----- Mini Library System -----";
        cout << "\n1. Add Record";
        cout << "\n2. Display Records";
        cout << "\n3. Search Record";
        cout << "\n4. Issue Book";
        cout << "\n5. Return Book";
        cout << "\n6. Exit";
        cout << "\nEnter Choice: ";
        cin >> choice;

        switch(choice)
        {
            case 1:
                cout << "Enter Member ID: ";
                cin >> l[n].memberId;

                cout << "Enter Member Name: ";
                cin >> l[n].memberName;

                cout << "Enter Book ID: ";
                cin >> l[n].bookId;

                cout << "Enter Book Name: ";
                cin >> l[n].bookName;

                cout << "Enter Quantity: ";
                cin >> l[n].quantity;

                n++;
                break;

            case 2:
                for(int i = 0; i < n; i++)
                {
                    cout << "\nMember ID : " << l[i].memberId;
                    cout << "\nMember Name : " << l[i].memberName;
                    cout << "\nBook ID : " << l[i].bookId;
                    cout << "\nBook Name : " << l[i].bookName;
                    cout << "\nQuantity : " << l[i].quantity << endl;
                }
                break;

            case 3:
            {
                int id, found = 0;
                cout << "Enter Book ID: ";
                cin >> id;

                for(int i = 0; i < n; i++)
                {
                    if(l[i].bookId == id)
                    {
                        cout << "\nMember ID : " << l[i].memberId;
                        cout << "\nMember Name : " << l[i].memberName;
                        cout << "\nBook ID : " << l[i].bookId;
                        cout << "\nBook Name : " << l[i].bookName;
                        cout << "\nQuantity : " << l[i].quantity << endl;
                        found = 1;
                        break;
                    }
                }

                if(found == 0)
                    cout << "Book Not Found!";
                break;
            }

            case 4:
            {
                int id;
                cout << "Enter Book ID: ";
                cin >> id;

                for(int i = 0; i < n; i++)
                {
                    if(l[i].bookId == id)
                    {
                        if(l[i].quantity > 0)
                        {
                            l[i].quantity--;
                            cout << "Book Issued Successfully!";
                            cout << "\nRemaining Quantity: " << l[i].quantity;
                        }
                        else
                        {
                            cout << "Book Not Available!";
                        }
                    }
                }
                break;
            }

            case 5:
            {
                int id;
                cout << "Enter Book ID: ";
                cin >> id;

                for(int i = 0; i < n; i++)
                {
                    if(l[i].bookId == id)
                    {
                        l[i].quantity++;
                        cout << "Book Returned Successfully!";
                        cout << "\nUpdated Quantity: " << l[i].quantity;
                    }
                }
                break;
            }

            case 6:
                cout << "Thank You!";
                break;

            default:
                cout << "Invalid Choice!";
        }

    } while(choice != 6);

    return 0;
}
