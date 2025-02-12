#include <iostream>
#include <string>

using namespace std;

int main(void)
{
	int n;
	cin >> n;

	int result = 0;
	int i = 666;
	while(1)
	{
		string str = to_string(i);
		int flag = false;
		for (int i = 0; i < str.size() - 2; i++)
		{
			if (str[i] == '6' && str[i + 1] == '6' && str[i + 2] == '6')
			{
				flag = true;
				break;
			}
		}
		if (flag == true)
			result++;

		if (result == n)
		{
			cout << i;
			break;
		}
		
		i++;
	}

	return 0;
}