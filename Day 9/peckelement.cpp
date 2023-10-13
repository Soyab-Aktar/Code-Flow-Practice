#include <iostream>
#include <vector>
using namespace std;

int peekElement(vector<int> &arr, int size)
{
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start) / 2;

    while (start <= end)
    {
        if (arr[mid] < arr[mid + 1])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }

    return mid;
}
int main()
{
    vector<int> arr{10, 20, 50, 40, 30};
    int size = arr.size();

    int peek = peekElement(arr, size);

    cout << "Peek Element of an array : " << arr[peek];

    return 0;
}