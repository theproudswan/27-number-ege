#include <iostream>
#include <cmath>

using namespace std;

int main(int argc, char** argv) {
	
	int a[101]={0};
	
	int buf1, buf2;
	
	int n;
	cin>>n;
	
	int max1=0;
	int max2=0;
	
	int s=0;
	
	for (int i=0; i<n; ++i){
		cin>>buf1; 
		cin>>buf2;
		
		max1=max(buf1, buf2);
		max2= min(buf1, buf2);
		
		while(max1!=max2){
			if(max1>max2){
				max1-=max2;
			} else {
				max2-=max1;
			}
		}
		a[max1]++;
		
		if(a[max1]>s){
			s=a[max1];
		}
		
	}
	for (int j=100; j>0; --j){
			if(a[j]==s){
				cout<<j<<"  ";
			}
		}
	
	return 0;
}
