#include <iostream>
#include <queue>

using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);


	int n;
	cin >> n;
	
	priority_queue<int, vector<int>, greater<int>> pq; // 우선순위 큐를 min heap이 되도록

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			int ipt;
			cin >> ipt;

			pq.push(ipt);

			if (pq.size() > n)
				pq.pop();
		}
	}
	
	cout << pq.top();

	return 0;
}