#include <iostream>
#include <vector>
using namespace std;

int m, n;
vector<int> v;
bool check[9] = { false };

void recur(int num)
{
	if (num == n)
	{
		for (int i = 0; i < v.size(); i++)
		{
			cout << v[i] << " ";
		}
		cout << '\n';
		return;
	}

	for (int i = 1; i <= m; i++)
	{
		if (check[i] == false)
		{
			check[i] = true;
			v.push_back(i);
			recur(num + 1);
			check[i] = false;
			v.pop_back();
		}
	}
}


int main(void)
{
	cin >> m >> n;

	recur(0);

	return 0;
}