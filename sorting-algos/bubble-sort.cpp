#include <iostream>
#include <vector>
using namespace std;

int main()
{

    vector<int> arr(5);
    int temp;

    for (int i = 0; i < arr.size(); i++)
    {
        cout << "Enter value: ";
        cin >> arr[i];
    }

    cout << "\n------------ Before ---------------\n";
    for (int i : arr)
    {
        cout << i << " ";
    }
    cout << "\n-----------------------------------\n";

    for (int i = 0; i < arr.size() - 1; i++) // for passes
    {
        bool swap = false;
        for (int j = 0; j < arr.size() - 1; j++) // for checking
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swap = true;
            }
        }
        if (!swap)
        {
            break;
        }
        cout << "\n------------ Pass " << i + 1 << " ---------------\n";
        for (int i : arr)
        {
            cout << i << " ";
        }
        cout << "\n-----------------------------------\n";
    }

    cout << "\n------------ After ---------------\n";
    for (int i : arr)
    {
        cout << i << " ";
    }
    cout << "\n----------------------------------\n";
    return 0;
}

// 4 3 5 7