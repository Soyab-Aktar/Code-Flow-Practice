#include <iostream>
#include <vector>
using namespace std;
void uniqueelement(vector<int> &arr, int size)
{
    int ans = 0;
    for (int i = 0; i < size; i++)
    {
        ans = ans ^ arr[i];
    }

    cout << "Unique element is : " << ans;
    
}
int main()
{
    vector<int> arr{10, 15, 16, 30, 10, 16, 30};
    int size = arr.size();

    uniqueelement(arr, size);

    return 0;
}