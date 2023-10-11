#include <iostream>
#include <vector>
using namespace std;

int firstOcc(vector<int> &arr, int target, int size)
{
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start) / 2;

    while (start <= end)
    {
        if (arr[mid] == target)
        {
            return mid;
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

    return -1;
}

int main()
{
    vector<int> arr{10, 20, 20, 20, 30, 30, 30, 70, 70, 90};
    int size = arr.size();
    int target;

    cout << "Enter your target : ";
    cin >> target;

    int occ = firstOcc(arr, target, size);

    cout << "First occ at index number = " << occ;

    return 0;
}