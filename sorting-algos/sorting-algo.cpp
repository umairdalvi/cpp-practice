#include <iostream>
#include <vector>
using namespace std;

void display(vector<int> arr);
vector<int> bubbleSort(vector<int> &);
vector<int> insertionSort(vector<int> &);
vector<int> selectionSort(vector<int> &);
void quickSort(vector<int> &, int, int);
int partition(vector<int> &, int, int);
void mergeSort(vector<int> &, int, int);
void merge(vector<int> &, int, int, int);

int main()
{

    int choice, size;

    cout << "Enter size of array: ";
    cin >> size;

    vector<int> arr(size);

    for (int i = 0; i < size; i++)
    {
        cout << "Enter data: ";
        cin >> arr[i];
    }

    display(arr);

    cout << endl;
    cout << "0. Exit" << endl;
    cout << "1. Bubble Sort" << endl;
    cout << "2. Selection Sort" << endl;
    cout << "3. Insertion Sort" << endl;
    cout << "4. Merge Sort" << endl;
    cout << "5. Quick Sort" << endl;
    cout << "Enter your choice(0-5): ";
    cin >> choice;

    switch (choice)
    {
    case 0:
    {
        cout << "\n----------------------------\n";
        cout << "Exiting.....";
        cout << "\n----------------------------\n";
        break;
    };
    case 1:
    {
        display(bubbleSort(arr));
        break;
    };
    case 2:
    {
        display(selectionSort(arr));
        break;
    };
    case 3:
    {
        display(insertionSort(arr));
        break;
    };
    case 4:
    {
        mergeSort(arr, 0, arr.size() - 1);
        display(arr);
        break;
    };
    case 5:
    {
        quickSort(arr, 0, arr.size() - 1);
        display(arr);
        break;
    };
    }

    return 0;
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
    bool swapped = false;
    for (int i = 0; i < arr.size() - 1; i++)
    {
        for (int j = 0; j < arr.size() - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swapped = true;
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
        if (!swapped)
        {
            break;
        }
    }

    return arr;
}

vector<int> insertionSort(vector<int> &arr)
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
    return arr;
}

vector<int> selectionSort(vector<int> &arr)
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
    return arr;
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

    int pivotIdx = start + count;

    int temp = arr[pivotIdx];
    arr[pivotIdx] = arr[start];
    arr[start] = temp;

    int i = start;
    int j = end;

    while (i < pivotIdx && j > pivotIdx)
    {
        while (arr[i] < pivot)
        {
            i++;
        }

        while (arr[j] > pivot)
        {
            j--;
        }

        if (i < pivotIdx && j > pivotIdx)
        {
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;

            i++;
            j--;
        }
    }

    return pivotIdx;
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

void merge(vector<int> &arr, int low, int mid, int high)
{
    vector<int> temp;
    int left = low;
    int right = mid + 1;

    while (left <= mid && right <= high)
    {
        if (arr[left] <= arr[right])
        {
            temp.push_back(arr[left]);
            left++;
        }
        else
        {
            temp.push_back(arr[right]);
            right++;
        }
    }

    while (left <= mid)
    {
        temp.push_back(arr[left]);
        left++;
    }

    while (right <= high)
    {
        temp.push_back(arr[right]);
        right++;
    }

    for (int i = low; i <= high; i++)
    {
        arr[i] = temp[i - low];
    }
}

void mergeSort(vector<int> &arr, int low, int high)
{
    if (low >= high)
    {
        return;
    }

    int mid = (low + high) / 2;

    mergeSort(arr, low, mid);
    mergeSort(arr, mid + 1, high);
    merge(arr, low, mid, high);
}