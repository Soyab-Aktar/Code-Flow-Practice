#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter your number ";
    cin >> num;

    for (int row = 0; row < num; row++)
    {
        for (int col = 0; col < row+1; col++)
        {
            cout<<"# ";
        }

        cout << endl;
    }

    return 0;
}