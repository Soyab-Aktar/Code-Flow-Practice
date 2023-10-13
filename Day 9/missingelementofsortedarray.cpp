#include <iostream>
#include <vector>
using namespace std;
int missingElement(vector<int> &arr, int size)
{
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start) / 2;
    int ans = -1;

    while (start <= end)
    {
        int diff = arr[mid] - mid;

        if (diff == 1)
        {
            start = mid + 1;
        }
        else
        {
            ans = mid;
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }

    return ans + 1;
}
int main()
{
    vector<int> arr{1, 2, 3, 4, 6, 7, 8, 9};
    int size = arr.size();

    int find = missingElement(arr, size);

    cout << "Missing element is : " << find;

    return 0;
}