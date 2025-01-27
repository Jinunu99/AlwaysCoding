#include <iostream>
#include <algorithm>

using namespace std;

int arr[100001] = { 0 };
int dp[100001] = { 0 };

int main(void)
{
	int n;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}

	int ans = arr[0];
	dp[0] = arr[0];

	for (int i = 1; i < n; i++)
	{
		dp[i] = max(arr[i], arr[i] + dp[i - 1]);
		ans = max(ans, dp[i]);
	}

	cout << ans;

	return 0;
}