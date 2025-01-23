#include <iostream>
#include <vector>
#include <queue>

using namespace std;

vector<vector<int>> v;
vector<int> result;
bool visit[100001] = { false };

void bfs(int start)
{
	queue<int> q;
	q.push(start);
	
	while (!q.empty())
	{
		int f = q.front();
		q.pop();

		for (int i = 0; i < v[f].size(); i++)
		{
			int check = v[f][i];

			if (!visit[check])
			{
				q.push(check);
				visit[check] = true;
				result[check] = f; // 해당 노드의 부모를 기록해놓음
			}
		}
	}
}

int main(void)
{
	int n;
	cin >> n;

	v.resize(n + 1);
	result.resize(n + 1);

	for (int i = 0; i < n - 1; i++)
	{
		int a, b;
		cin >> a >> b;
		v[a].push_back(b);
		v[b].push_back(a);
	}

	bfs(1);

	for (int i = 2; i <= n; i++)
	{
		cout << result[i] << "\n";
	}

	return 0;
}