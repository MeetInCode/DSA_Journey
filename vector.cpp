#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> abc = {1, 2, 3};
    cout << abc[0] << endl;

    vector<int> abc2(5, 1);
    cout << abc2[0] << endl;
    cout << abc2[0] << endl;

    for (int val : abc2)
    { // if vector is of char then it would be  for(char val : abc2)
        cout << val << "-->";
    }

    cout << endl
         << "size =" << abc2.size() << endl;

    abc2.push_back(2);

    cout << "after pushback" << endl;
    for (int val : abc2)
    { // if vector is of char then it would be  for(char val : abc2)
        cout << val << "-->";
    }

    abc2.pop_back();

    cout << endl
         << abc2.front() << endl;
    cout << endl
         << abc2.back() << endl;



         abc2.push_back(2);
    cout << abc2.at(0) << endl;
    cout << abc2.at(5);
}