// Кол-во пар сумм кот оканч на 4.cpp: определяет точку входа для консольного приложения.
//


#include <iostream>

using namespace std;

int main()
{
	int n, buf, ans = 0;
	cin >> n;
	int a[5] = { 0 };
	int b[5] = { 0 };
	for (int i = 0; i < n; ++i) {
		cin >> buf;
		if (buf % 10 < 5) {
			ans += a[4 - buf % 10];
			a[buf % 10]++;

		} else if (buf % 10 >=5) { 
			ans += b[buf % 10 - 5];
			b[9-buf % 10]++;
		}
	}
	cout << endl;
	cout << ans << endl;
    return 0;
}

