#include <iostream>
using namespace std;

int a[10];
// 了解数组的使用
void print_array() {
    cout << "位置：";
    for (int i = 0; i < 10; i++) {
        cout << i << " ";
    }
    cout << endl;

    cout << "数值：";
    for (int i = 0; i < 10; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
    cout << endl;
}

// 主函数
int main() {

    print_array();

    a[2] = 3;
    print_array();

    a[5] = 8;
    print_array();

}
