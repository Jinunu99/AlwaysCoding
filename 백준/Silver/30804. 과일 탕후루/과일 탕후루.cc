#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int n;
	cin >> n;
	
	vector<int> v;
	int cnt[10] = { 0 };
	for (int i = 0; i < n; i++)
	{
		int ipt;
		cin >> ipt;
		v.push_back(ipt);
	}

	int s = 0;
	int e = 0;
	int max = 0;
	cnt[v[s]]++;


	while (e < n - 1)
	{
		int count = 0;
		for (int i = 1; i <= 9; i++)
		{
			if (cnt[i] != 0)
				count++;
		}
		if (count <= 2) // 종류가 2개 이하이면
		{
			if (max < e - s + 1)
				max = e - s + 1;
				
			e++;
			cnt[v[e]]++;
		}
		else
		{
			cnt[v[s]]--;
			s++;
		}

		if (e == n - 1)
			break;
	}

	int count = 0;
	for (int i = 1; i <= 9; i++)
	{
		if (cnt[i] != 0)
			count++;
	}
	if (count <= 2)
	{
		if (max < e - s + 1)
			max = e - s + 1;
	}

	cout << max;

	return 0;
}