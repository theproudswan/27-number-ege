// Количество пар, сумма которых оканчивается на 4, а произведение нечётное
//

#include <iostream>

using namespace std;

int main()
{
	int n, buf, ans=0;
	int a[100] = { 0 };
	cin >> n;
	for (int i = 0; i < n; ++i) {
		cin >> buf;
		if (buf % 100 <= 4) {
			ans += a[14 - buf % 100];
		}
		else if ((buf%100>=5)&&(buf % 100 < 10)) {
			ans += a[14 - buf % 10];
		}
		else if ((buf%100>=10)&&(buf%100<=14)) {
			ans += a[14-buf%100];
		}
		else {
			ans += a[114 - buf % 100];
		}
		if (buf % 2 != 0) {
			a[buf % 100]++;
		}
	}
	cout << endl << ans << endl;
    return 0;
}