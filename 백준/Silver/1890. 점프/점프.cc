#include <iostream>

using namespace std;

int arr[100][100] = { 0 };
long long dp[100][100] = { 0 };

int main(void)
{
	int n;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cin >> arr[i][j];
		}
	}

	dp[0][0] = 1;

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (dp[i][j] != 0 && arr[i][j] != 0)
			{
				int jump = arr[i][j];
				if (i + jump < n)
					dp[i + jump][j] += dp[i][j];

				if (j + jump < n)
					dp[i][j + jump] += dp[i][j];
			}
		}
	}

	cout << dp[n - 1][n - 1];

	return 0;
}