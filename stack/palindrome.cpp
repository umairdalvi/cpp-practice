#include <iostream>
#include <stack>
#include <algorithm>

using namespace std;

bool isPalindrome(string);

int main()
{
    string n;
    cout << "Enter a string: ";
    cin >> n;

    transform(n.begin(), n.end(), n.begin(), ::tolower);

    if (isPalindrome(n))
    {
        cout << "String is a palindrome.";
    }
    else
    {
        cout << "String is not a palindrome.";
    }

    return 0;
}

bool isPalindrome(string n)
{
    stack<char> word;

    for (char c : n)
    {
        word.push(c);
    }

    for (char c : n)
    {
        if (c != word.top())
        {
            return false;
        }
        word.pop();
    }

    return true;
}