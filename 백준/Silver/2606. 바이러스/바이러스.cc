#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int compu, n;
vector<vector<int>> v;
bool check[101] = { false };

int bfs(int start)
{
	queue<int> q;
	q.push(start);
	check[start] = true;

	int cnt = 0;
	while (!q.empty())
	{
		int f = q.front();
		q.pop();

		for (int i = 0; i < v[f].size(); i++)
		{
			int che = v[f][i];

			if (!check[che])
			{
				cnt++;
				check[che] = true;
				q.push(che);
			}
		}
	}

	return cnt;
}

int main(void)
{
	cin >> compu;
	cin >> n;

	v.resize(compu + 1); // 2차원 벡터 resize하는 방법 => vec.resize(row, vector<int>(col));

	for (int i = 0; i < n; i++)
	{
		int a, b;
		cin >> a >> b;

		v[a].push_back(b);
		v[b].push_back(a);
	}

	int cnt;
	cnt = bfs(1);

	cout << cnt;

	return 0;
}