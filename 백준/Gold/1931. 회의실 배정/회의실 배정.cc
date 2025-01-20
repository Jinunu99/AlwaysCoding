#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool cmp(pair<int, int> a, pair<int, int> b)
{
	if (a.second == b.second)
		return a.first < b.first;
	else
		return a.second < b.second;
}

int main(void)
{
	int n;
	cin >> n;
	
	vector<pair<int, int>> v;

	for (int i = 0; i < n; i++)
	{
		int s, e;
		cin >> s >> e;
		v.push_back({ s, e });
	}

	sort(v.begin(), v.end(), cmp);

	int cnt = 1;
	int  meet_s = v[0].second;

	for (int i = 1; i < n; i++)
	{
		int start = v[i].first;
		int end = v[i].second;

		if (start >= meet_s)
		{
			cnt++;
			meet_s = end;
		}
	}
	cout << cnt;

	return 0;
}