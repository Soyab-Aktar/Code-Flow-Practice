#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;
int maxArr(vector<vector<int>> &arr, int size)
{
    int oneCount = INT_MIN;

    for (int i = 0; i < size; i++)
    {
        int count = 0;

        for (int j = 0; j < arr[i].size(); j++)
        {
            if (arr[i][j] == 1)
            {
                count++;
            }
            if (count > oneCount)
            {
                oneCount = count;
            }
        }
    }

    return oneCount;
}
int main()
{
    vector<vector<int>> arr{
        {1, 0, 0, 0},
        {0, 1, 1, 0},
        {1, 1, 1, 0},
        {0, 0, 1, 0}};

    int size = arr.size();

    int maxnum = maxArr(arr, size);

    cout << "Maximum 1s in a row is : " << maxnum;

    return 0;
}
