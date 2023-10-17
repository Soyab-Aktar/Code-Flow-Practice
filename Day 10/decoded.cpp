#include <iostream>
using namespace std;
string decodech(string name, string massage)
{
    // create mapping

    char start = 'a';
    char mapping[300] = {0};

    for (auto ch : name)
    {
        if (ch != ' ' && mapping[ch] == 0)
        {
            mapping[ch] = start;
            start++;
        }
    }

    // use mapping

    string ans;
    for (int i = 0; i < massage.length(); i++)
    {
        char ch = massage[i];
        if (ch == ' ')
        {
            ans.push_back(' ');
        }
        else
        {
            char decodedmag = mapping[ch];
            ans.push_back(decodedmag);
        }
    }

    return ans;
}
int main()
{
    string name;
    string massage;

    cout << "Enter a text : ";
    getline(cin, name);
    cout << "Enter a massage : ";
    getline(cin, massage);

    string finalmag = decodech(name, massage);

    cout << "After decoding the massage : " << finalmag;

    return 0;
}