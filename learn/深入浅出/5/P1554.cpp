#include<iostream>
using namespace std;
int main(){
	int m, n, a[10]={0};
	int tmp, digit;
	//  0  1  2  3  4  5  6  7  8  9
	// [0, 0, 0, 0, 2, 0, 0, 0, 0, 1]

	// 输入
	cin>>m>>n;

	// 处理
	for(int i=m; i<=n; i++){
		tmp = i;	// 将此时的i赋值给tmp
		while(tmp!=0) {
			digit = tmp % 10; // digit = 此时tmp的最后一位数字
			a[digit]++;
			tmp = tmp / 10;
		}
	}

	// 输出
	for(int i=0; i<10; i++) {
		cout << a[i] << " ";
	}
	cout << endl;
	
	return 0;
}