#include <iostream>
using namespace std;
int findroot(int num)
{
    int start = 0;
    int end = num - 1;
    int mid = start + (end - start) / 2;
    int ans = -1;

    while (start <= end)
    {
        if (mid * mid == num)
        {
            return mid;
        }
        else if (mid * mid < num)
        {
            ans = mid;
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }

        mid = start + (end - start) / 2;
    }

    return ans;
}
int main()
{
    int num;
    cout << "Enter your number : ";
    cin >> num;

    int root = findroot(num);

    cout << "Square root of number is : " << root;

    return 0;
}