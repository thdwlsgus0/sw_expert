#include <iostream>
#include <string.h>
using namespace std;

int main(void)
{
	int n, j, arr[5] = { 2,3,5,7,11 }, result[5];
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		memset(result, 0, sizeof(int)*5);
		int data;
		j = 0;
		cin >> data;
		while (data != 1)
		{
			if (data % arr[j] == 0)
			{
				result[j]++;
				data = data / arr[j];
			}
			else
				j++;
		}
		cout << "#" << i + 1<<' ';
		for (int k = 0; k < 5; k++)
		{
			cout << result[k] << ' ';
		}
		cout << '\n';
	}
	return 0;
}