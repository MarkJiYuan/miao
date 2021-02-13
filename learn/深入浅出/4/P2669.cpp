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

    return 0;
}
