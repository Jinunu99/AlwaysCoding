#include <iostream>
#include <vector>
#include <numeric>

using namespace std;

int n, s;
int arr[20] = { 0 };
vector<int> v;
int cnt = 0;

void recur(int start)
{
	if (start == n)
		return;

	for (int i = start; i < n; i++)
	{
		v.push_back(arr[i]);
		if (s == accumulate(v.begin(), v.end(), 0)) // 벡터에 있는 부분 집합의 합이 s와 동일하면 카운트
			cnt++;

		recur(i + 1);
		v.pop_back();
	}
}

int main(void)
{
	cin >> n >> s;

	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}

	recur(0);

	cout << cnt;

	return 0;
}