#include <iostream>
#include <vector>
using namespace std;

void pusharr(vector<int> &arr, int size, int k)
{

    for (int i = 0; i < size; i++)
    {
        int newindex = (i + k) % size;
        cout << arr[newindex] << " ";
    }
}
int main()
{
    vector<int> arr{1, 2, 3, 4, 5, 6, 7, 8};
    int size = arr.size();
    int k;

    cout << "How much you want to push : ";
    cin >> k;

    pusharr(arr, size, k);

    return 0;
}