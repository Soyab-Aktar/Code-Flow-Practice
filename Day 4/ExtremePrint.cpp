#include <iostream>
#include <vector>
using namespace std;
void extremePrint(vector<int> &arr, int size)
{
    int left = 0;
    int right = size - 1;

    while (left <= right)
    {
        if (left < right)
        {
            cout << arr[left] << " ";
            cout << arr[right] << " ";

            left++;
            right--;
        }
    }

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    vector<int> arr{1, 2, 3, 4, 5, 6, 7, 8, 9};
    int size = arr.size();

    extremePrint(arr, size);

    return 0;
}