#include <iostream>
#include <climits>
using namespace std;

int main(void)
{
	int n, m;
	cin >> n >> m;

	char arr[50][50];
	string str;
	for (int i = 0; i < n; i++)
	{
		cin >> str;
		for (int j = 0; j < m; j++)
		{
			arr[i][j] = str[j];
		}
	}

	string check[2] = { "WBWBWBWB", "BWBWBWBW" };
	int min = INT_MAX;

	for (int i = 0; i <= n - 2; i++)
	{
		for (int j = 0; j <= m - 2; j++)
		{
			int cnt = 0;
			for (int k = 0; k < 8; k++)
			{
				string check_str = check[k % 2];
				for (int z = 0; z < 8; z++)
				{
					if (arr[i + k][j + z] != check_str[z])
						cnt++;
				}
			}
			if (min > cnt)
				min = cnt;

			cnt = 0;
			for (int k = 0; k < 8; k++)
			{
				string check_str = check[(k + 1) % 2];
				for (int z = 0; z < 8; z++)
				{
					if (arr[i + k][j + z] != check_str[z])
						cnt++;
				}
			}
			if (min > cnt)
				min = cnt;
		}
	}
	cout << min;

	return 0;
}