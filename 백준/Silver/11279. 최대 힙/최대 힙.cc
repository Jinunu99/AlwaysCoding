#include <iostream>
#include <queue>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	priority_queue<int> pq;

	int n;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		int ipt;
		cin >> ipt;

		if (ipt == 0)
		{
			if (!pq.empty())
			{
				cout << pq.top() << "\n";
				pq.pop();
			}
			else
				cout << 0 << "\n";
		}
		else
			pq.push(ipt);

	}

	return 0;
}