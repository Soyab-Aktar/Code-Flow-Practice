#include <iostream>
using namespace std;

string removech(string name)
{
    string ans = "";
    int index = 0;
    while (index < name.length())
    {
        if (ans.length() > 0 && ans[ans.length() - 1] == name[index])
        {
            ans.pop_back();
        }
        else
        {
            ans.push_back(name[index]);
        }
        index++;
    }

    return ans;
}
int main()
{
    string name;

    cout << "Enter some letter :";
    getline(cin, name);

    string afterremove = removech(name);

    cout << "After remove : " << afterremove;

    return 0;
}