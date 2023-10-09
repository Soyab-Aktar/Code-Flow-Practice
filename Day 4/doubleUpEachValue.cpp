#include <iostream>
#include <vector>
using namespace std;
void doubleup(vector<int> &arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << 2 * arr[i] << " ";
    }
}
int main()
{
    vector<int> arr{1, 2, 3, 4, 5, 6, 7, 8, 9};
    int size = arr.size();

    doubleup(arr, size);

    return 0;
}