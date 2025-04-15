#include <iostream>
#include <vector>
using namespace std;

vector<int> reverseVector(vector<int>);

int main()
{

    int size;
    cout << "enter size of vector: ";
    cin >> size;

    vector<int> array(size);

    for (int i = 0; i < size; i++)
    {
        cout << "enter value: ";
        cin >> array[i];
    }

    vector<int> result = reverseVector(array);

    cout << "reversed vector: ";

    for (int i : result)
    {
        cout << i << " ";
    }

    return 0;
}

vector<int> reverseVector(vector<int> array)
{
    int size = array.size();
    vector<int> reversedArray;

    for (int i = size - 1; i >= 0; i--)
    {
        reversedArray.push_back(array[i]);
    }

    return reversedArray;
}
