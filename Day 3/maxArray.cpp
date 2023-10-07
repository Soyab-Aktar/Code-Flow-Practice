#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;
int maxArray(vector<int> &arr, int size)
{
    int maxNum = INT_MIN;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > maxNum)
        {
            maxNum = arr[i];
        }
    }
    return maxNum;
}
int main()
{
    vector<int> arr{10, 50, 90, 70, 11, 5, 99, 50, 47};
    int size = arr.size();

    int getMax = maxArray(arr, size);

    cout << "Maximum number of an array : " << getMax;

    return 0;
}