// 백준 1966 프린터 큐
#include <iostream>
#include <queue>

using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int test;
	cin >> test;

	for (int t = 0; t < test; t++) {

		priority_queue<int> pq; // 중요도
		queue<pair<int, int>> q; // 인덱스, 값
		int n, m;

		cin >> n >> m;
		for (int i = 0; i < n; i++) {
			int ipt;
			cin >> ipt;
			pq.push(ipt);
			q.push({ i, ipt });
		}
		
		int cnt = 1;
		while (1) {
			int idx = q.front().first;
			int top = q.front().second;

			if (top == pq.top()) // 현재 문서가 가장 높은 중요도 라면 
			{
				if (idx == m) // 출력하고 싶은 인덱스라면
				{
					cout << cnt << "\n";
					break;
				}
				else {
					pq.pop();
					q.pop();
					cnt++;
				}
			}
			else // 현재 문서가 중요도가 가장 높지않으면 맨 뒤로 배치
			{
				q.push(q.front());
				q.pop();
			}
		}
	}
}