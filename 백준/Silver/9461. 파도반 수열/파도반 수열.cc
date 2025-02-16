#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	long long arr[100] = { 0 };

	int t;
	cin >> t;

	arr[0] = arr[1] = arr[2] = 1;

	for (int i = 0; i < t; i++)
	{
		int ipt;
		cin >> ipt;

		for (int j = 3; j < ipt; j++)
		{
			arr[j] = arr[j - 3] + arr[j - 2];
		}
		cout << arr[ipt - 1] << "\n";
	}

	return 0;
}