// wap to develop complete mini project using array,strings and function
#include <bits/stdc++.h>
using namespace std;

string q[5] = {
    "1. Header file for C++? \nA)<stdio.h> B)<bits/stdc++.h> C)<math.h>",
    "2. Entry function?\nA)start() B)main() C)run()",
    "3. Symbol to end statement?\nA); B): C),",
    "4. Loop that runs at least once?\nA)for B)while C)do-while",
    "5. Keyword to create structure?\nA)class B)struct C)object"
};

char ans[5] = {'B','B','A','C','B'};
int score = 0;

void quiz()
{
    char ch;
    for(int i = 0; i < 5; i++)
    {
        cout << "\n" << q[i] << "\nAnswer: ";
        cin >> ch;

        if(toupper(ch) == ans[i])
            score++;
    }
}

int main()
{
    quiz();

    cout << "\nCorrect Answers: " << score;

    if(score >= 3)
        cout << "\nPASS";
    else
        cout << "\nFAIL";

    return 0;
}
