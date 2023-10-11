#include <iostream>
#include <vector>
using namespace std;

int binerySearch(vector<int> &arr, int target, int size)
{
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start) / 2;

    while (start <= end)
    {
        if (arr[mid] == target)
        {
            return mid;
        }
        else if (arr[mid] > target)
        {
            end = mid - 1;
        }
        else if (arr[mid] < target)
        {
            start = mid + 1;
        }

        mid = start + (end - start) / 2;
    }

    return -1;
}

int main()
{
    vector<int> arr{10, 20, 30, 40, 50, 60, 70, 80, 90};
    int size = arr.size();
    int target;

    cout << "Enter your target : ";
    cin >> target;

    int find = binerySearch(arr, target, size);

    if (find == -1)
    {
        cout << "Target not found ";
    }
    else
    {
        cout << "Target found .";
    }

    return 0;
}