// Минимальная сумма, которая кратна 100

#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	int n;
	cin >> n;
	int min60 = 10001, min61 = 10001, min62 = 10001, min20 = 10001, min21 = 10001, min30 = 10001, min22 = 10001, min31 = 10001, min32 = 10001, min = 10001, min0 = 10001 * 10001, buf;
	int arr[102] = { 0 };
	
	for (int i = 0; i < n; ++i) {

		cin >> buf;
		if (buf % 100 == 0) {
			if (buf < arr[0] || arr[0] == 0) {
				if ((arr[0] < arr[100])||arr[100]==0) {
					arr[100] = arr[0];
				}
				arr[0] = buf;
			}
			else if ((buf<arr[100])||arr[100]==0) {
				arr[100] = buf;
			}

		} else 	if (buf % 100 == 50) {
			if (buf < arr[50] || arr[50] == 0) {
				if ((arr[50] < arr[101]) || arr[101] == 0) {
					arr[101] = arr[50];
				}
				arr[50] = buf;
			}
			else if ((buf<arr[101]) || arr[101] == 0) {
				arr[101] = buf;
			}

		}
		else if ((arr[buf % 100] > buf)||(arr[buf % 100]==0)) {
			arr[buf % 100] = buf;

		}
	}
	for (int i = 0; i < 50; ++i) {
		if ((arr[i] + arr[100 - i] < min60)&&arr[i]!=0&&arr[100-i]!=0) {

			min60 = arr[i] + arr[100 - i];
		}
	}
	if (arr[50] != 0 && arr[101] != 0) {
		if (arr[50] + arr[101] < min60) {
			min60 = arr[50] + arr[101];
		}
	}

	if (min60 != 10001) {
		cout << min60 << endl;
	}
	else {
		cout << -1 << endl;
	}
    return 0;
}

