// wap to create quiz application
#include <bits/stdc++.h>
using namespace std;

int main(){
    int ans, score = 0;

    cout << "1. Which country won the ICC Cricket World Cup 2023?\n";
    cout << "1. India\n2. Australia\n3. England\n";
    cin >> ans;
    if(ans == 2) score++;

    cout << "\n2. How many players are there in a football team on the field?\n";
    cout << "1. 10\n2. 11\n3. 12\n";
    cin >> ans;
    if(ans == 2) score++;

    cout << "\n3. C++ is a ______?\n";
    cout << "1. Programming Language\n2. Operating System\n3. Browser\n";
    cin >> ans;
    if(ans == 1) score++;

    cout << "\n4. Which symbol is used to end a statement in C++?\n";
    cout << "1. :\n2. ;\n3. ,\n";
    cin >> ans;
    if(ans == 2) score++;

    cout << "\nYour Score = " << score << "/4";

    return 0;
}
