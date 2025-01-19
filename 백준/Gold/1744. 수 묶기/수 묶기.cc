#include <iostream>
#include <queue>

using namespace std;

int main(void)
{
	priority_queue<int> plusq; // 양수 큐는 내림차순
	priority_queue<int, vector<int>, greater<int>> minusq; // 음수 큐는 오름차순
	int one = 0;
	bool zero = false;

	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int ipt;
		cin >> ipt;
		if (ipt > 1)
			plusq.push(ipt);
		else if (ipt == 1)
			one++;
		else if (ipt == 0)
			zero = true;
		else
			minusq.push(ipt);
	}

	int sum = 0;

	while (plusq.size() > 1)
	{
		int first = plusq.top();
		plusq.pop();
		int second = plusq.top();
		plusq.pop();

		sum += first * second;
	}
	if (!plusq.empty())
		sum += plusq.top();

	while (minusq.size() > 1)
	{
		int first = minusq.top();
		minusq.pop();
		int second = minusq.top();
		minusq.pop();

		sum += first * second;
	}
	if (!minusq.empty())
	{
		if (zero == false)
			sum += minusq.top();
	}
	sum += one;

	cout << sum;

	return 0;
}