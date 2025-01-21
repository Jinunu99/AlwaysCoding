#include <iostream>
#include <vector>
#include <algorithm>
#include <stdlib.h>

using namespace std;

int main(void)
{
	int n;
	vector<int> v;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int ipt;
		cin >> ipt;
		v.push_back(ipt);
	}
	sort(v.begin(), v.end());

	int idx = 1;
	long long result = 0;
	for (int i = 0; i < n; i++)
	{
		result += abs(v[i] - idx);

		idx++;
	}

	cout << result;

	return 0;
}