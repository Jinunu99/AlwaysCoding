// 백준 1969 DNA

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

char DNA[1000][50] = { 0 };
int dna[4][50] = { 0 };

int main(void)
{
	int n, m;
	cin >> n >> m;
	
	char c[4] = { 'A', 'C', 'G', 'T' };
	string str = "";

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cin >> DNA[i][j];
			if (DNA[i][j] == 'A')
				dna[0][j]++;
			else if (DNA[i][j] == 'C')
				dna[1][j]++;
			else if (DNA[i][j] == 'G')
				dna[2][j]++;
			else
				dna[3][j]++;
		}
	}

	int maxi[50] = { 0 };
	for (int j = 0; j < m; j++)
	{
		maxi[j] = max(dna[0][j], max(dna[1][j], max(dna[2][j], dna[3][j])));

		for (int i = 0; i < 4; i++)
		{
			if (dna[i][j] == maxi[j]) {
				str += c[i];
				break;
			}
		}
	}

	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (str[j] != DNA[i][j])
			{
				sum++;
			}
		}
	}

	cout << str << "\n" << sum;
}