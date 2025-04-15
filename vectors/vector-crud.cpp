#include <iostream>
#include <vector>
using namespace std;

int main()
{

    int choice;

    // cout << "Enter vector size: ";
    // cin >> size;

    vector<int> data;

    do
    {
        cout << "1. Add Data" << endl;
        cout << "2. View Data" << endl;
        cout << "3. Update Data" << endl;
        cout << "4. Delete Data" << endl;
        cout << "5. Exit" << endl;

        cout << "Enter Choice (1-5): ";
        cin >> choice;

        switch (choice)
        {
        case 1:
        {
            int value;

            cout << "Enter Value: ";
            cin >> value;

            data.push_back(value);

            cout << "Data added succesfully." << endl;

            break;
        }
        case 2:
        {
            cout << "----------------------\n";
            for (int i : data)
            {
                cout << i << " ";
            }
            cout << "\n----------------------\n";

            break;
        }
        case 3:
        {
            int idx;

            cout << "Enter position of data you want to update: ";

            data.erase(data.begin()+idx);
            // data.(data.begin()+idx);

            cout << "Data updated succesfully." << endl;

            break;
        }
        case 4:
        {
            int idx;

            cout << "Enter position of data to delete: ";
            cin >> idx;

            data.erase(data.begin()+idx);

            cout << "Data deleted succesfully." << endl;

            break;
        }
        }
    } while (choice != 5);

    return 0;
}