// Количество пар, сумма которых оканчивается на 24
//

#include <iostream>

using namespace std;

int main()
{
	int n, buf, ans = 0;
	cin >> n;
	int a[100] = { 0 };
	
	for (int i = 0; i < n; ++i) {
		cin >> buf;
		if (buf % 100 > 24) {
			ans += a[24 + 100 - buf % 100];
		}
		else {
			ans += a[(24 - buf % 100)%24];
		}
		a[buf % 100]++;
	}
	cout << endl;
	cout << ans << endl;
	return 0;
}
