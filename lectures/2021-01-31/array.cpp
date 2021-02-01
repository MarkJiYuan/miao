#include <iostream>
using namespace std;
int b[10000][10],number,n,a[11];


void print_array() {
    cout << "位置：";
    for (int i = 0; i < 11; i++) {
        cout << i << " ";
    }
    cout << endl;

    cout << "数值：";
    for (int i = 0; i < 11; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
    cout << endl;
}

void chicken(int k, int g){
	int i;
	if(k == 11){
		if(g == 0){
			number++;
			for(i = 1; i <= 10; i++){
				b[number][i] = a[i];
			}
		}
	}
	else{
		for(i = 1; i <= 3&&i <= g; i++){
			a[k] = i;
            print_array();

			chicken(k+1, g-i);

			a[k] = 0;
            print_array();
		}
	}
}
int main(){
	int i,j;
	number = 0;
	cin >> n;
	if(n <= 10 && n >= 30){
		cout << 0;
	}
	else{
		chicken(1,n);
		cout << number << endl;
		for(i = 1; i <= number; i++){
			for(j = 1; j <= 10; j++)
				cout << b[i][j] << " ";
			cout << endl;
		}
	}
	return 0;
} 
