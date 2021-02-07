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
    int a[105] = {0}, n, count;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    // 处理


    // 输出
    // 从最左边的小鱼一直数到右边，每一个都看有几个在左边的不如自己的鱼，
    for(int i = 0; i < n; i++) {
        count = 0;
        for(int j = 0; j < i; j++) {
            if(a[j] < a[i])
                count++;
        }
        cout << count << " ";
    }
    return 0;
}

