#include <iostream>
#include <vector>
using namespace std;

int firstOcc(vector<int> &arr, int target, int size)
{
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start) / 2;
    int ans = 0;

    while (start <= end)
    {
        if (arr[mid] == target)
        {
            ans = mid;
            end = mid - 1;
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

    return ans;
}

int lastOcc(vector<int> &arr, int target, int size)
{
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start) / 2;
    int ans = 0;

    while (start <= end)
    {
        if (arr[mid] == target)
        {
            ans = mid;
            start = mid + 1;
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

    return ans;
}

int main()
{
    vector<int> arr{10, 20, 20, 20, 30, 30, 30, 70, 70, 90};
    int size = arr.size();
    int target;

    cout << "Enter your target : ";
    cin >> target;

    int firstocc = firstOcc(arr, target, size);
    int lastocc = lastOcc(arr, target, size);

    int totalOcc = lastocc - firstocc + 1;

    cout << "Total occ = " << totalOcc;

    return 0;
}