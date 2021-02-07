#include <iostream>
using namespace std;

void print_array(int a[], int n) {
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
}

int main() {
    // 输入
    int a[105] = {0}, n, i=0;

    cin >> n;
    while(n!=0) {
        // 存储
        a[i] = n;
        i++;
        cin >> n;
    }

    for(;i>0;i--) {
        cout << a[i-1] << " ";
    }
    return 0;
}

