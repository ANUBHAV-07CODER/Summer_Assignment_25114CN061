// wap to create ticket booking system
#include <bits/stdc++.h>
using namespace std;

struct Ticket{
    int ticketNo;
    string name;
    int seats;
};

int main(){
    Ticket t[100];
    int n = 0, choice;

    do
    {
        cout << "\n1. Book Ticket";
        cout << "\n2. Display Tickets";
        cout << "\n3. Search Ticket";
        cout << "\n4. Exit";
        cout << "\nEnter Choice: ";
        cin >> choice;

        switch(choice)
        {
        case 1:
            t[n].ticketNo = 1001 + n;

            cout << "Enter Passenger Name: ";
            cin >> t[n].name;

            cout << "Enter Number of Seats: ";
            cin >> t[n].seats;

            cout << "\nTicket Booked Successfully!";
            cout << "\nYour Ticket Number is: " << t[n].ticketNo << endl;

            n++;
            break;

        case 2:
            for(int i = 0; i < n; i++)
            {
                cout << "\nTicket No: " << t[i].ticketNo;
                cout << "\nPassenger Name: " << t[i].name;
                cout << "\nSeats: " << t[i].seats << endl;
            }
            break;

        case 3:
        {
            int no, found = 0;

            cout << "Enter Ticket Number: ";
            cin >> no;

            for(int i = 0; i < n; i++)
            {
                if(t[i].ticketNo == no)
                {
                    cout << "\nTicket No: " << t[i].ticketNo;
                    cout << "\nPassenger Name: " << t[i].name;
                    cout << "\nSeats: " << t[i].seats << endl;
                    found = 1;
                    break;
                }
            }

            if(found == 0)
                cout << "Ticket Not Found!";
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
