#include <iostream>
#include <vector>
using namespace std;
void countarr(vector<int> &arr, int size)
{
    int coutnZero = 0;
    int countOne = 0;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] == 1)
        {
            countOne++;
        }
        else
        {
            coutnZero++;
        }
    }
    cout << "Zero is :" << countOne<<endl;
    cout << "One is : " << coutnZero;
}
int main()
{
    vector<int> arr{1, 0, 0, 0, 1, 1, 0, 1, 1, 0, 0};
    int size = arr.size();

    countarr(arr, size);
    return 0;
}