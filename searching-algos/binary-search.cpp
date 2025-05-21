#include <iostream>
#include <vector>
using namespace std;

void inputArrayData(vector<int> &arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        cout << "Enter data: ";
        cin >> arr[i];
    }
}

void display(vector<int> arr)
{
    cout << "\n------------------------------------\n";
    for (int i : arr)
    {
        cout << i << " ";
    }
    cout << "\n------------------------------------\n";
}

vector<int> bubbleSort(vector<int> &arr)
{
    int n = arr.size();
    for (int i = 0; i < n; i++)
    {
        bool swapped = false;
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swapped = true;
            }
        }

        if (!swapped)
        {
            break;
        }
    }

    return arr;
}

int binarySearch(vector<int> &arr, int start, int end, int key)
{
    if (start > end)
    {
        return -1;
    }

    int mid = (start + end) / 2;

    if (key == arr[mid])
    {
        return mid;
    }
    else if (key < arr[mid])
    {
        return binarySearch(arr, start, mid - 1, key);
    }
    else
    {
        return binarySearch(arr, mid + 1, end, key);
    }
}

int main()
{
    int size;
    cout << "Enter size of array: ";

    cin >> size;

    vector<int> arr(size);

    inputArrayData(arr);

    display(bubbleSort(arr));

    int data;
    cout << "Enter data to search: ";
    cin >> data;

    int searchResult = binarySearch(arr, 0, arr.size() - 1, data);

    if (searchResult != -1)
    {
        cout << "Data found at index: " << searchResult;
    }
    else
    {
        cout << "Data not found.";
    }

    return 0;
}