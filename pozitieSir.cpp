#include <iostream>
using namespace std;
int main()
{
	int n, x, y, i, poz=1;
	bool exista=0;
	cin >> n >> x;
	for (i = 0; i < n; i++)
	{
		cin >> y;
		if (y > x) poz++;
		else if (y == x) exista = 1;
	}
	if (!exista) cout << -1;
	else cout << poz;
	return 0;
}
// scor 100
