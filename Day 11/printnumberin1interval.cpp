#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> arr{1, 2, 3, 4, 5, 6, 7, 8, 9};
    int size = arr.size();

    for (int i = 0; i < size; i = i + 2)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
