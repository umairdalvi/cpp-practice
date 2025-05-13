#include <iostream>
#include <vector>
using namespace std;

void selectionSort(vector<int> &);

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
        for (int j = i + 1; j < arr.size(); j++)
        {
            int min = i;

            if (arr[j] < arr[min])
            {
                min = j;
            }

            if (min != i)
            {
                int temp = arr[i];
                arr[i] = arr[min];
                arr[min] = temp;
            }
            
        }
    }
}