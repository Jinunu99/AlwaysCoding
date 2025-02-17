#include <iostream>
#include <queue>

using namespace std;

int main()
{
	int n;
	cin >> n;

	int da;
	cin >> da;

	priority_queue<int> pq;

	for (int i = 0; i < n - 1; i++)
	{
		int ipt;
		cin >> ipt;
		pq.push(ipt);
	}

	int cnt = 0;
	while (!pq.empty())
	{
		if (da > pq.top())
			break;

		int t = pq.top() - 1;
		pq.pop();
		pq.push(t);
		da++;
		cnt++;
	}

	cout << cnt;

	return 0;
}