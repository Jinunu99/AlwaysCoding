#include <iostream>
#include <string>

using namespace std;

int main(void)
{
	string word;
	string str;
	getline(cin, word);
	getline(cin, str);

	int cnt = 0;
	int idx = 0;

	while (idx + str.size() <= word.size())
	{
		for (int i = 0; i < str.size(); i++)
		{
			if (word[idx + i] != str[i])
			{
				idx++;
				break;
			}

			if (i == str.size() - 1)
			{
				cnt++;
				idx += str.size();
			}
		}
	}

	cout << cnt;

	return 0;
}