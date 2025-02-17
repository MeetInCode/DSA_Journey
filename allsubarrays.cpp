#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5};

    cout << "all subarrays possible " << endl;
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = i; j < arr.size(); j++)
        {
            for (int start = i; start <= j; start++)
            {
                cout << arr[start];
            }
            cout << "  ";
        }
        cout << endl;
    }
    cout << endl;

    return 0;
}