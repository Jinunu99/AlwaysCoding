#include <iostream>
#include <queue>

using namespace std;

int main(void)
{
	priority_queue<int, vector<int>, greater<int>> pq;
	int n;

	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int ipt;
		cin >> ipt;
		pq.push(ipt);
	}

	int sum = 0;
	while (pq.size() != 1)
	{
		int first = pq.top();
		pq.pop();
		int second = pq.top();
		pq.pop();

		pq.push(first + second);
		sum += first + second;
	}

	cout << sum;

	return 0;
}