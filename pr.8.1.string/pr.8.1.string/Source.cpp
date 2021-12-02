#include <iostream>
#include <string>
using namespace std;

bool Search(const string str, size_t& i1, size_t& i2)
{
    for (size_t i = i2; str[i] != '\0'; i++)
        if (str[i] != '\0' && str[i + 1] != '\0' && str[i + 2] != '\0' && str[i + 3] != '\0')
        {
            if (str[i] == str[i + 1] && str[i + 1] == str[i + 2] && str[i + 2] == str[i + 3])
            {
                i1 = i;
                i2 = i + 2;
                return true;
            }
        }
    return false;
}

void Replace(string& str)
{
    size_t i1 = 0, i2 = 0;
    while (Search(str, i1, i2))
    {
        str.replace(i1, 4, "**");
    }
}

int main()
{
    string str;
    getline(cin, str);
    size_t i1 = 0, i2 = 0;
    if (Search(str, i1, i2))
        cout << "true\n";
    else cout << "false\n";

    Replace(str);
    cout << str << endl;

}