#include <iostream>
using namespace std;

// 判断当前数是否是质数
bool is_prime(int a) {
    if(a == 2 || a == 3) return true;

    for(int i=2; i<a; i++) {
        if(a%i==0) return false;
    }
    return true;
}

// 布尔 - 0和1
// 真 - 1， 假 - 0
// true - 真，false - 0

int main() {
    int num=2, count=0, L, bag=0;
    cin >> L;

    while(true) {
        // 如果是质数，判断当前重量 + 该质数是否超过负载 L
        if(is_prime(num)) {
            if(bag + num > L) break;
            else {
                bag += num;
                cout << num << endl;
                count++;
            }
        }
        // 如果不是质数，继续寻找下一个质数
        num++;
    }

    cout << count << endl;

    return 0;
}