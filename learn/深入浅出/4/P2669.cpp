#include <iostream>
using namespace std;

int main() {
    int k=0, coin=0, salary=1, left_day=1;
    // tmp - 当前工资(=continue_day)还有几天没领

    cin >> k;

    for (int i=0; i<k; i++) {

        coin += salary;              // 发工资
        left_day--;                  // 待领天数 -1

        if(!--left_day) {            // 当前工资发完了，说明工资该涨了
            salary++;                // 涨工资，新工资等于原本工资 +1
            left_day = salary;       // 新工资剩余天数 = 新工资
        }
    }

    cout << coin << endl;

    // int a, b;
    // a = 2;

    // b = --a;

    // b = a--;

    // b = ++a;
    // ==>
    // a = a + 1;
    // b = a;

    // b = a++;
    // ===>
    // b = a;
    // a++;

    // cout << a << " " << b << endl;

    // 计算机的性能：执行指令的快慢
    // 指令就是一行
    // 一条指令：1s

    // a = 0
    // a += 1
    // a += 2
    // a += 3
    // a += 4
    // a += 5

    // for(int i=0; i<5;i++) {
    //     a += i+1;
    // }

    // for(num) {
    //     s += num;
    // }

    // s += num * num;

    // a += 2 * 200

    // a = 15

    // i = 0
    // num = 1
    // i = 1
    // s = 0

    // 1 <= 5
    // 1 <= 1
    // s = 1
    // num = 2
    // i = 3

    // s += 2
    // s += 2
    // s = 5
    // num = 3
    // i += 3
    // i = 6

    // s += 3
    // s += 3
    // s += 3
    // s = 14
    // num = 4
    // i += 4
    // i = 10


    // s += (k-(i-num)) * num;
    
    return 0;
}
