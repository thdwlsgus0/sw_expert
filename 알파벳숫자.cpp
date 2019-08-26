#include <iostream>
#include <string>
using namespace std;

int main(void)
{
	ios_base::sync_with_stdio(false);
	string s;
	cin >> s;
	for (int i = 0; i < s.length(); i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z') cout << s.at(i) - 'a'+1 << ' ';
		else if (s[i] >= 'A' && s[i] <= 'Z') cout << s.at(i) - 'A'+1 << ' ';
	}
	return 0;
}