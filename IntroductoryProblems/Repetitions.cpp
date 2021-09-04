/*
    Problem: https://cses.fi/problemset/task/1069
    author : anindiangeek
    Learnings:
            * after comparing my and willam lin soultion
             got to know that you can use this loop as well
             for(char l : s), where s is a string
            * first I tried to make condition i-1 but it did not worked
              it can work.
*/

#include <iostream>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int64_t r = 0, m = 0;
    for (int i = 0; s[i] != '\0'; i++)
    {
        m = (max(r, m));
        (s[i] == s[i + 1]) ? r++ : r = 0;
    }
    cout << ++m;
}
