#include <iostream>
using namespace std;
int main()
{
    string name;
    string ans = "";
    cout << "Enter your sentence : ";
    getline(cin, name);

    for (int i = 0; i < name.length(); i++)
    {
        char ch = name[i];
        if (ch > 'a' && ch < 'z')
        {
            ans.push_back(ch);
        }
        else if (ch == ' ')
        {
            ans.push_back(ch);
        }
    }

    cout << "After removing upper case : " << ans;
    return 0;
}
