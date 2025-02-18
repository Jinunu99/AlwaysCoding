#include <iostream>

using namespace std;

int main()
{
	int n;
	cin >> n;

	int dp[10] = { 0 };
	for (int i = 0; i < 10; i++)
		dp[i] = 1;

	for (int i = 0; i < n - 1; i++)
	{
		int sum = dp[9];
		for (int j = 8; j >= 0; j--)
		{
			sum += dp[j] % 10007;
			dp[j] = sum;
		}
	}

	int result = 0;
	for (int i = 0; i <= 9; i++)
	{
		result += dp[i];
	}
	cout << result % 10007;

	return 0;
}