// wap to create inventory management system
#include <bits/stdc++.h>
using namespace std;

struct Item{
    int id;
    string name;
    int quantity;
};

int main(){
    Item p[100];
    int n = 0, ch;

    do
    {
        cout << "\n1.Add Item";
        cout << "\n2.Display Items";
        cout << "\n3.Search Item";
        cout << "\n4.Exit";
        cout << "\nEnter Choice: ";
        cin >> ch;

        switch(ch)
        {
            case 1:
                cout << "Enter Item ID: ";
                cin >> p[n].id;
                cout << "Enter Item Name: ";
                cin >> p[n].name;
                cout << "Enter Quantity: ";
                cin >> p[n].quantity;
                n++;
                break;

            case 2:
                for(int i = 0; i < n; i++)
                {
                    cout << "\nID: " << p[i].id;
                    cout << "\nName: " << p[i].name;
                    cout << "\nQuantity: " << p[i].quantity << endl;
                }
                break;

            case 3:
            {
                int id;
                cout << "Enter Item ID: ";
                cin >> id;

                for(int i = 0; i < n; i++)
                {
                    if(p[i].id == id)
                    {
                        cout << "\nID: " << p[i].id;
                        cout << "\nName: " << p[i].name;
                        cout << "\nQuantity: " << p[i].quantity;
                    }
                }
                break;
            }

            case 4:
                cout << "Thank You!";
                break;

            default:
                cout << "Invalid Choice";
        }

    } while(ch != 4);

    return 0;
}
