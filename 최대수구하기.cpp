#include <iostream>
#include <algorithm>
using namespace std;

int main(void)
{
	int n,arr[10];
	cin >> n;
	for(int i=0; i<n; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			cin >> arr[j];
		}
		sort(arr, arr + 10);
		cout << "#" << i + 1 << ' ' << arr[9] << '\n';
	}
}