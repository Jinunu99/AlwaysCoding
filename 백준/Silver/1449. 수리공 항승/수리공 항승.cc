// 백준 1449번 수리공 항승

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void)
{
	vector<int> v;

	int n, l;
	cin >> n >> l;

	for (int i = 0; i < n; i++)
	{
		int ipt;
		cin >> ipt;
		v.push_back(ipt);
	}
	sort(v.begin(), v.end());

	int cnt = 1;
	float start = (float)v[0] - 0.5 + (float)l;

	for (int i = 0; i < n; i++)
	{
		if (start < (float)v[i])
		{
			cnt++;
			start = (float)v[i] - 0.5 + (float)l;
		}
	}

	cout << cnt;
}