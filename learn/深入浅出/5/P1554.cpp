#include<iostream>
using namespace std;
int main(){
	int m,n,a[505]={0},s,b,g;
	cin>>m>>n;
	for(int j=0;j<=9;j++){
		a[j]=0 ;
		for(int i=m;i<=n;i++){
			b=i/100;
			s=(i-(i/100)*100)/10;
			g=i-b*100-s*10;
			if(b==j || s==j|| g==j){
				a[j]++;
			}
		}
		cout<<a[j]<<" ";
	}
	return 0;
}