#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> arr{1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
    int size = arr.size();
    vector<int> ans1;
    vector<int> ans2;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] % 2 == 0)
        {
            ans1.push_back(arr[i]);
        }
        else
        {
            ans2.push_back(arr[i]);
        }
    }

    cout << "Even numbers of array is :" << endl;

    for (int i = 0; i < ans1.size(); i++)
    {
        cout << ans1[i] << " , ";
    }

    cout << endl;
    cout << "odd numbers of array is :" << endl;
    for (int i = 0; i < ans2.size(); i++)
    {
        cout << ans2[i] << " , ";
    }
    return 0;
}
