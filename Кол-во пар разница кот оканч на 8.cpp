// Количество пар, разница которых оканчивается на 8
//
#include <iostream>

using namespace std;

int main()
{
	int n, buf, ans = 0;
	int a[100] = { 0 };
	int num;
	cin >> n;
	for (int i = 0; i < n; ++i) {
		cin >> buf;
		if ((buf % 100 >= 8) && (buf % 100 <= 91)) {
			ans += a[(buf % 100) + 8];
			ans += a[(buf % 100) - 8];
		}
		else if (buf % 100 < 8) {
			ans += a[buf % 10 + 8];
		}
		else if (buf % 100 > 91) { 
			ans += a[buf % 100 - 8];
		}
		a[buf % 100]++;
	}
	cout << endl << endl << ans << endl;
	return 0;
}

