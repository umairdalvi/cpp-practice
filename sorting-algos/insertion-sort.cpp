#include <iostream>
#include <vector>
using namespace std;

void insertionSort(vector<int> &arr);

int main()
{

    vector<int> arr(5);

    for (int i = 0; i < arr.size(); i++)
    {
        cout << "Enter data: ";
        cin >> arr[i];
    }

    cout << "\n------------ Before ---------------\n";
    for (int i : arr)
    {
        cout << i << " ";
    }
    cout << "\n-----------------------------------\n";

    insertionSort(arr);

    cout << "\n------------ Sorted ---------------\n";
    for (int i : arr)
    {
        cout << i << " ";
    }
    cout << "\n-----------------------------------\n";

    return 0;
}

void insertionSort(vector<int> &arr)
{
    for (int i = 1; i < arr.size(); i++)
    {
        int key = arr[i];
        int j = i - 1;

        while (j >= 0)
        {
            if (key < arr[j])
            {
                arr[j + 1] = arr[j];
                j--;
            }
            else
            {
                break;
            }
        }
        arr[j + 1] = key;
    }
}
