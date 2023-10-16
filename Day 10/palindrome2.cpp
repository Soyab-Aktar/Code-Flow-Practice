#include <iostream>
using namespace std;

bool checkpalindrome(string name, int left, int right)
{
    while (i <= j)
    {
        if (str[i] != str[j])
        {
            return false;
        }
        i++;
        j--;
    }
    return true;
}

bool palindromech(string name)
{
    int left = 0;
    int right = name.length() - 1;

    while (left <= right)
    {
        if (name[left] == name[right])
        {
            left++;
            right--;
        }
        else
        {
            bool ans1 = checkpalindrome(name, left + 1, right);
            bool ans2 = checkpalindrome(name, left, right - 1);

            return ans1 || ans2;
        }
    }

    return true;
}

int main()
{
    string name;

    cout << "Enter some letter :";
    getline(cin, name);

    bool find = palindromech(name);
    if (find)
    {
        cout << "Yes, it's a palindrome or can be made into one by removing one character." << endl;
    }
    else
    {
        cout << "No, it cannot be made into a palindrome by removing one character." << endl;
    }

    return 0;
}