#include <iostream>
using namespace std;
bool comparech(string name1, string name2)
{
    if (name1.length() != name2.length())
    {
        return false; // If the lengths are different, the strings can't be the same.
    }

    for (int i = 0; i < name1.length(); i++)
    {
        if (name1[i] != name2[i])
        {
            return false; // If any character doesn't match, return false.
        }
    }

    return true; // If all characters match, return true.
}
int main()
{
    string name1;
    string name2;

    cout << "Enter yout first word : ";
    getline(cin, name1);
    cout << "Enter yout second word : ";
    getline(cin, name2);

    bool finalans = comparech(name1, name2);

    if (finalans == true)
    {
        cout << "Two word are same .";
    }
    else
    {
        cout << "Two words are different .";
    }

    return 0;
}