#include <iostream>
#include <vector>
using namespace std;
void getsort(vector<int> &arr)
{
    int size = arr.size();

    int index = 0;
    int left = 0;
    int right = size - 1;

    while (index < right)
    {
        if (arr[index] == 0)
        {
            swap(arr[left], arr[index]);
            index++;
            left++;
        }
        else if (arr[index] == 2)
        {
            swap(arr[index], arr[right]);
            right--;
        }
        else
        {
            index++;
        }
    }

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    vector<int> arr{1, 2, 0, 0, 2, 2, 2, 1, 1, 0, 0, 1};

    getsort(arr);

    return 0;
}