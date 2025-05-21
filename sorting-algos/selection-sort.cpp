#include <iostream>
#include <vector>
using namespace std;

void selectionSort(vector<int> &);

int main()
{
    int size;
    cout << "Enter size of array: ";

    cin >> size;

    vector<int> arr(size);

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

    selectionSort(arr);

    cout << "\n------------ Sorted ---------------\n";
    for (int i : arr)
    {
        cout << i << " ";
    }
    cout << "\n-----------------------------------\n";

    return 0;
}

void selectionSort(vector<int> &arr)
{
    for (int i = 0; i < arr.size() - 1; i++)
    {
        int min = i;
        for (int j = i + 1; j < arr.size(); j++)
        {
            if (arr[j] < arr[min])
            {
                min = j;
            }
        }

        if (min != i)
        {
            int temp = arr[i];
            arr[i] = arr[min];
            arr[min] = temp;
        }
    }
}