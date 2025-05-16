#include <iostream>
using namespace std;

int sumOfDigits(int n)
{
    if (n < 10)
    {
        return n;
    }

    return n % 10 + sumOfDigits(n / 10);
}

int main()
{

    int n;
    cout << "enter a number: ";
    cin >> n;

    cout << sumOfDigits(n) << endl;

    return 0;
}