#include <iostream>
#include <vector>
using namespace std;
void pairArray(vector<int> &arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            cout << arr[i] << " " << arr[j] << endl;
        }
    }
}
int main()
{
    vector<int> arr{1, 2, 3};
    int size = arr.size();

    pairArray(arr, size);

    return 0;
}