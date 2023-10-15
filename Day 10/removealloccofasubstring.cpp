#include <iostream>
using namespace std;

string removech(string name, string part)
{
    while (name.find(part) != string ::npos)
    {
        name.erase(name.find(part), part.length());
    }

    return name;
}



int main()
{
    string name;
    string part;

    cout << "Enter some letter :";
    getline(cin, name);
    cout << "Enter a word :";
    getline(cin, part);

    string afterremove = removech(name, part);

    cout << "After remove : " << afterremove;

    return 0;
}