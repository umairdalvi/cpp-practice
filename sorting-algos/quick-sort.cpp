#include <iostream>
#include <vector>
using namespace std;

void quickSort(vector<int> &, int, int);
int partition(vector<int> &, int, int);
void display(vector<int> &arr);

int main()
{

    int size;
    cout << "Enter size of array: ";
    cin >> size;

    vector<int> arr(size, 0);

    for (int i = 0; i < size; i++)
    {
        cout << "Enter data: ";
        cin >> arr[i];
    }

    display(arr);
    quickSort(arr, 0, arr.size() - 1);
    display(arr);

    return 0;
}

void quickSort(vector<int> &arr, int start, int end)
{
    if (start >= end)
    {
        return;
    }

    int pIdx = partition(arr, start, end);

    quickSort(arr, 0, pIdx - 1);
    quickSort(arr, pIdx + 1, end);
}

int partition(vector<int> &arr, int start, int end)
{
    int pivot = arr[start];
    int count = 0;

    for (int i = start + 1; i <= end; i++)
    {
        if (arr[i] < pivot)
        {
            count++;
        }
    }

    int pIdx = start + count;

    int temp = arr[pIdx];
    arr[pIdx] = arr[start];
    arr[start] = temp;

    int i = start;
    int j = end;

    while (i < pIdx && j > pIdx)
    {
        while (arr[i] < pivot)
        {
            i++;
        }

        while (arr[j] > pivot)
        {
            j--;
        }

        if (i < pIdx && j > pIdx)
        {
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;

            i++;
            j--;
        }
    }

    return pIdx;
}

void display(vector<int> &arr)
{
    cout << "\n-----------------------------------------\n";
    for (int i : arr)
    {
        cout << i << " ";
    }
    cout << "\n-----------------------------------------\n";
}