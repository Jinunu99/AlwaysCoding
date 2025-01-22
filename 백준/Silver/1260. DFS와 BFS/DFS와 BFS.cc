#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

vector<vector<int>> vec;
int visit[1001] = { 0 };

// dfs는 재귀 이용
void dfs(int start)
{
	visit[start] = 1;
	cout << start << " ";

	for (int i = 0; i < vec[start].size(); i++)
	{
		int check = vec[start][i];
		if (visit[check] == 0)
		{
			dfs(check);
		}
	}
}

// bfs는 큐 이용
void bfs(int start)
{
	queue<int> q;
	q.push(start);
	visit[start] = 1;

	while (!q.empty())
	{
		int x = q.front();
		q.pop();
		cout << x << " ";

		for (int i = 0; i < vec[x].size(); i++)
		{
			int check = vec[x][i];
			if (visit[check] == 0)
			{
				q.push(check);
				visit[check] = 1;
			}
		}

	}
}

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, m, v;
	cin >> n >> m >> v;

	vec.resize(n + 1);

	for (int i = 0; i < m; i++)
	{
		int a, b;
		cin >> a >> b;

		vec[a].push_back(b);
		vec[b].push_back(a);
	}
	for (int i = 1; i <= n; i++)
	{
		sort(vec[i].begin(), vec[i].end());
	}

	dfs(v);

	fill(visit, visit + n + 1, 0);
	cout << "\n";
	bfs(v);


	return 0;
}