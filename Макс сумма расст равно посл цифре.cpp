// Максимальная сумма, расстояние между слагаемыми которой равно последней цифре

#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	
	int n;
	cin>>n;
	
	int a[10]={0};
	
	int maxim=-1;
	
	int x=-1,y=-1;
	
	int buf;
	
	for (int i=0; i<10; ++i){
		cin>>a[i];
	}
	int k;
	for (int i=10; i<n; ++i){
		k=a[i%10]%10;
		if (((a[i%10]+ a[(i%10+k)%10])%2==1)&&(i+k<n)){
			if((a[i%10]+ a[(i%10+k)%10])>maxim){
				maxim=(a[i%10]+ a[(i%10+k)%10]);
				x=a[i%10];
				y=a[(i%10+k)%10];
			}
		}
		cin>>buf;
		a[i%10]=buf;
	}
	
	if((x!=-1)&&(y!=-1)){
		cout<<endl<<x<<"  "<<y<<endl;
	} else{
		cout<<endl<<"00"<<endl;
	}
	
	system("pause");
	return 0;
}
