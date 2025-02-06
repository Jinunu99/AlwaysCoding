#include <iostream>

using namespace std;

int main(void)
{
	int n;
	cin >> n;

	long long arr[101][10] = { 0 };

	for (int i = 0; i <= 9; i++)
		arr[1][i] = 1;

	for (int i = 2; i <= n; i++)
	{
		for (int j = 0; j <= 9; j++)
		{
			if (j == 0)
				arr[i][j] = arr[i - 1][j + 1] % 1000000000;
			else if (j == 9)
				arr[i][j] = arr[i - 1][j - 1] % 1000000000;
			else
				arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j + 1] % 1000000000;
		}
	}

	long long sum = 0;

	for (int i = 1; i <= 9; i++)
		sum += arr[n][i];

	cout << sum % 1000000000;

	return 0;
}