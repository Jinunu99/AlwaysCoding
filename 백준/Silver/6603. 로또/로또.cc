#include <iostream>
#include <vector>

using namespace std;

vector<int> v;
vector<int> result;

void backtraking(int start, int depth)
{
	if (depth == 6)
	{
		for (int i = 0; i < 6; i++)
			cout << result[i] << " ";
		cout << "\n";
		return;
	}

	for (int i = start; i < v.size(); i++)
	{
		result.push_back(v[i]);
		backtraking(i + 1, depth + 1);
		result.pop_back();
	}
}

int main(void)
{
	while (1)
	{
		int k;
		cin >> k;

		if (k == 0)
			return 0;

		v.resize(0);

		for (int i = 0; i < k; i++)
		{
			int ipt;
			cin >> ipt;
			v.push_back(ipt);
		}

		for (int i = 0; i <= k - 6; i++)
		{
			int depth = 1;

			result.push_back(v[i]);
			backtraking(i + 1, depth);
			result.resize(0);
		}
		cout << "\n";
	}

	return 0;
}