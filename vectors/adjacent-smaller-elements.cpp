#include <iostream>
#include <vector>
using namespace std;

vector<int> findSmallerElement(vector<int>);

int main()
{

    int size;
    cout << "enter size of vector: ";
    cin >> size;

    vector<int> elements(size);

    for (int i = 0; i < size; i++)
    {
        cout << "enter value: ";
        cin >> elements[i];
    }

    vector<int> smallerElements = findSmallerElement(elements);

    cout << "smaller elements: ";
    for (int i : smallerElements)
    {
        cout << i << " ";
    }

    return 0;
}

vector<int> findSmallerElement(vector<int> arr)
{

    vector<int> result;

    int size = arr.size();
    for (int i = 1; i < size - 1; i++)
    {
        if (arr[i] < arr[i - 1] && arr[i] < arr[i + 1])
        {
            result.push_back(arr[i]);
        }
    }

    return result;
}