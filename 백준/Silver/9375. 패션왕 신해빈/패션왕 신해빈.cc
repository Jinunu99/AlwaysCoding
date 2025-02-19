#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
	int t;
	cin >> t;
	
	for (int i = 0; i < t; i++)
	{
		int n;
		cin >> n;

		vector<string> vec;
		int cnt[30] = { 0 };

		for (int j = 0; j < n; j++)
		{
			string str1, str2;
			cin >> str1 >> str2;

			bool flag = false;
			for (int k = 0; k < vec.size(); k++)
			{
				if (vec[k] == str2)
				{
					flag = true;
					cnt[k]++;
					break;
				}
			}
			if (flag == false) // 해당 종류가 없다
			{
				vec.push_back(str2);
				cnt[vec.size() - 1]++;
			}
		}

		int result = 1;
		for (int j = 0; j < vec.size(); j++)
		{
			result *= (cnt[j] + 1);
		}
		cout << result - 1 << "\n";
	}

	return 0;
}