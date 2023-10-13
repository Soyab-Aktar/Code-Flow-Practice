#include <iostream>
#include <vector>
using namespace std;

int findpivot(vector<int> &arr, int size)
{
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start) / 2;

    while (start <= end)
    {
        if (arr[mid] < arr[mid + 1])
        {
            return mid - 1;
        }
        else if (arr[mid] > arr[mid + 1])
        {
            return mid;
        }
        else if (arr[start] == arr[end])
        {
            return start;
        }
        else if (arr[start] > arr[mid])
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }

        mid = start + (end - start) / 2;
    }
}
int main()
{
    vector<int> arr{12, 14, 16, 2, 4, 8, 10};
    int size = arr.size();

    int pivot = findpivot(arr, size);

    cout << "Pivot point of an array : " << arr[pivot];

    return 0;
}