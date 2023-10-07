#include <iostream>
#include <vector>
using namespace std;
bool findElement(vector<int> &arr, int target)
{
    int size = arr.size();

    for (int i = 0; i < size; i++)
    {
        if (arr[i] == target)
        {
            return true;
        }
    }

    return false;
}
int main()
{
    vector<int> arr{1, 2, 3, 4, 5, 6, 7, 8, 9};
    int target;
    cout << "Enter your target :";
    cin >> target;

    bool find = findElement(arr, target);

    if (find == 1)
    {
        cout << "found";
    }
    else
    {
        cout << "Not found .";
    }

    return 0;
}