// Количество пар, разница которых оканчивается на 38
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
		if ((buf % 100 >= 38) && (buf % 100 <= 61)) {
			ans += a[(buf % 100) + 38];
			ans += a[(buf % 100) - 38];

		}
		else if (buf % 100 < 38) {
			ans += a[buf % 100 + 38];
		}
		else if (buf % 100 > 61) { 
			ans += a[buf % 100 - 38];
		}
		a[buf % 100]++;
	}
	cout << endl << endl << ans << endl;
	return 0;
}

