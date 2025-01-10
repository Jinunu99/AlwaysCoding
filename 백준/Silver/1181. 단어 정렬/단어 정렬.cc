// 백준 1181번
#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

bool cmp(string a, string b)
{
	if (a.length() == b.length()) // 문자열 길이가 동일하면 사전순
		return a < b;
	else
		return a.length() < b.length();
}

string str[20001];

int main(void)
{
	int ipt;
	
	cin >> ipt;
	for (int i = 0; i < ipt; i++) {
		cin >> str[i];
	}

	sort(str, str + ipt, cmp);

	for (int i = 0; i < ipt; i++) {
		if (str[i] != str[i + 1])
			cout << str[i] << "\n";
	}

	return 0;
}