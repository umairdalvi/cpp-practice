#include <iostream>
using namespace std;

int fact(int n)
{
    if (n <= 1)
    {
        return n;
    }

    return n * fact(n - 1);
}

int main()
{
    int n;
    cout << "enter a number: ";
    cin >> n;

    cout << "factorial: " << fact(n);

    return 0;
}