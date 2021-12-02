#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string.h>
using namespace std;

bool Search(const char* str, int& i1, int& i2)
{
	for (int i = i2; str[i] != '\0'; i++)
		if (str[i] == str[i + 1] &&
			str[i + 1] == str[i + 2] != '\0' &&
			str[i + 2] == str[i + 3] != '\0')
		{
			i1 = i;
			i2 = i + 2;
			return true;
		}
	return false;
}
	
void Replace(char* str)
{
	int i1 = 0;
	int i2 = 0;
	while (Search(str, i1, i2))
	{
		str[i1] = '\0';
		str = strcat(str, "**");
		str = strcat(str, str + i1 + 4);
	}
}
int main()
{
	char* str = new char[101];
	cin.getline(str, 100);
	int i1 = 0;
	int i2 = 0;
	if (Search(str, i1, i2))
		cout << "true\n";
	else cout << "false\n";

	Replace(str);
	cout << str << endl;
}
