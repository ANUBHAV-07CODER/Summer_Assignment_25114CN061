// wap to create menu-driven array operation system
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a[100], n, ch;

    cout << "Enter Size: ";
    cin >> n;

    cout << "Enter Elements: ";
    for(int i = 0; i < n; i++)
        cin >> a[i];

    do
    {
        cout << "\n1.Display\n2.Maximum\n3.Minimum\n4.Exit\n";
        cin >> ch;

        switch(ch)
        {
            case 1:
                for(int i = 0; i < n; i++)
                    cout << a[i] << " ";
                break;

            case 2:
                cout << *max_element(a, a + n);
                break;

            case 3:
                cout << *min_element(a, a + n);
                break;

            case 4:
                cout << "Thank You!";
                break;

            default:
                cout << "Invalid Choice";
        }

    } while(ch != 4);

    return 0;
}
