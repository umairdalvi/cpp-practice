#include <iostream>
#include <stack>
using namespace std;

void convertToBinary(int);

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;

    convertToBinary(n);

    return 0;
}

void convertToBinary(int n)
{
    stack<int> binaryStack;

    while (n > 0)
    {
        int rem;
        rem = n % 2;
        binaryStack.push(rem);
        n = n / 2;
    }

    for (int i = (binaryStack.size() - 1); i >= 0; i--)
    {
        cout << binaryStack.top();
        binaryStack.pop();
    }
}