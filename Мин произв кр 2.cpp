// Минимальное произведение, которое кратно 2
//

#include <iostream>

using namespace std;

int main()
{
	int n;
	cin >> n;
	int min2 = 10001, min = 10001, buf = 0;
	for (int i = 0; i < n; ++i) {
		cin >> buf;
		if ((buf % 2 == 0) && (buf < min2)) {
			if (min > min2) { 
				min2 = min;
			}
			min2 = buf;
		}
		else if (buf < min) {
			min = buf;
		}
	}
	if ((min2 != 10001) && (min != 10001)) {
		cout << min2 * min << endl;
	}
	else {
		cout << -1 << endl;
	}
	return 0;
}

