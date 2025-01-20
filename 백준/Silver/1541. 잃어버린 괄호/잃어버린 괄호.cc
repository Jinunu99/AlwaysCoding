// 1541
#include <iostream>
#include <string>
using namespace std;

int main(void)
{
	string str;
	cin >> str;

	string s = "";
	int result = 0;
	bool minus = false;
	for (int i = 0; i < str.size(); i++)
	{
		if (str[i] == '+' || str[i] == '-')
		{
			if (minus == true)
			{
				result -= stoi(s);
			}
			else
			{
				result += stoi(s);

				if (str[i] == '-')
					minus = true;
			}
			s = "";
		}
		else
			s += str[i];
	}

	if (minus == true)
		result -= stoi(s);
	else
		result += stoi(s);

	cout << result;

	return 0;
}