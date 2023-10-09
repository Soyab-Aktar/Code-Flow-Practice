#include <iostream>
#include <vector>
using namespace std;

void rotatearr(vector<vector<int>> &arr, int size)
{
    for (int index = 0; index < size; index++)
    {
        for (int j = index; j < arr[index].size(); j++)
        {
            swap(arr[index][j], arr[j][index]);
        }
    }

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < arr[i].size(); j++)
        {
            cout << arr[i][j];
        }
        cout << endl;
    }
}

int main()
{
    vector<vector<int>> arr{
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}};
    int size = arr.size();

    rotatearr(arr, size);

    return 0;
}