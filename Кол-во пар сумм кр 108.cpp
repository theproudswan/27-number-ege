// Количество пар, сумма которых кратна 108
//

#include <iostream>

using namespace std;

int main()
{
	int a[108] = { 0 }; 
	int buf, n, ans = 0;
	cin >> n;
	for (int i = 0; i < n; ++i) {
		cin >> buf;
		ans+=a[(108-buf%108)%108];
		a[buf%108]++;
	}
	cout<<ans<<endl;	
    return 0;
}

