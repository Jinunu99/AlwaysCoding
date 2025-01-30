#include <iostream>

using namespace std;

int main(void)
{
	int t;
	cin >> t;

	for (int i = 0; i < t; i++)
	{
		int n, m;

		cin >> n >> m;

		long long result = 1;
		for (int j = 1; j <= n; j++)
		{
			result *= m;
			m--;
			result /= j;
		}
		cout << result << '\n';
	}
}