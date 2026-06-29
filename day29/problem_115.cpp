// wap to create menu-driven string operation system
#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    int ch;
    cout << "Enter String: ";
    cin >> s;
    do
    {
        cout << "\n1.Length\n2.Reverse\n3.Exit\n";
        cin >> ch;

        switch(ch)
        {
            case 1:
                cout << "Length = " << s.length();
                break;

            case 2:
                reverse(s.begin(), s.end());
                cout << s;
                break;

            case 3:
                cout << "Thank You!";
                break;

            default:
                cout << "Invalid Choice";
        }

    } while(ch != 3);

    return 0;
}
