#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> arr{1, 2, 3, 4, 5};

    cout << "1st number and last number is " << arr[0] << " & " << arr[arr.size() - 1];

    return 0;
}