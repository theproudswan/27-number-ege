// Мин разница, которая кратна 3
//

#include <iostream>

using namespace std;

int main()
{
	int n;
	cin >> n;
	int min = 10001, min2 = 10001, buf, f01 = 10001,f02 = 10001,f11 = 10001,f12 = 10001;
	for (int i = 0; i < n; ++i) {
		cin >> buf;

		switch (buf%3){
		case 0:
			if ((buf < min)||(buf<min2)){
				if (min2 < min) {
					min = min2;
				}
				else {
					min2 = min;
				}
				min = buf;
			}
			break;
		case 1:
			if ((buf < f01) || (buf<f02)) {
				if (f02 < f01) {
					f01 = f02;
				}
				else {
					f02 = f01;
				}
				f01 = buf;
			}
			break;
		case 2:
			if ((buf < f11) || (buf<f12)) {
				if (f12 < f11) {
					f11 = f12;
				}
				else {
					f12 = f11;
				}
				f11 = buf;
			}
			break;
		default:
			break;
		}
	}
	cout << "..............................................." << endl << endl;
	cout << endl << min << "	" << min2 << endl;
	cout << "..............................................." << endl << endl;

	cout << f01 << "	" << f02 << endl;
	cout << "..............................................." << endl << endl;
	cout << f11 << "	" << f12 << endl;
	cout << "..............................................." << endl << endl;


	if (min != 10001 && min2 != 10001) {
		if (f01 != 10001 && f02 != 10001) {
			if (f11 != 10001 && f12 != 10001) {
				if (abs(min - min2) < std::min(abs(f01 - f02), abs(f11 - f12))) {
					cout << abs(min - min2) << endl;
				}
				else {
					cout << std::min(abs(f01 - f02), abs(f11 - f12)) << endl;
				}
			}
			else {
				cout << std::min(abs(min - min2), abs(f01 - f02)) << endl;
			}
		}
		else if (f11 != 10001 && f12 != 10001) {
			cout << std::min(abs(min - min2), abs(f12 - f11)) << endl;
		}
		else {
			cout << abs(min - min2)<<endl;
		}
	}
	else if ((f01 != 10001 && f02 != 10001) && (f11 != 10001 && f12 != 10001)) {
		cout << std::min(abs(f01 - f02), abs(f12 - f11)) << endl;
	}
	else if (f01 != 10001 && f02 != 10001) {
		cout << abs(f01 - f02) << endl;
	}
	else if (f11 != 10001 && f12 != 10001) {
		cout << abs(f11 - f12) << endl;
	}
	else {
		cout << -1 << endl;
	}

	return 0;
}

