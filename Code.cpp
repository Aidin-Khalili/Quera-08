#include <iostream>
using namespace std;
int main ()
{
	int i, n, j,x ;
	cin >> n;
	//n = 2 * n + 1;
	for (i = 0 ; i <= n ; i++)
	{
		for (j = n-i; j >0; j--)
		{
			cout << ' ';
		}
		for (int k = 0; k < 2*i+1 ; k++)
		{
			cout << '*';
		}
		cout << endl;

	}
	for (i = n-1; i >= 0; i--)
	{
		for (j = n - i; j > 0; j--)
		{
			cout << ' ';
		}
		for (int k = 0; k < 2 * i + 1; k++)
		{
			cout << '*';
		}
		cout << endl;

	}
	return 0;
}