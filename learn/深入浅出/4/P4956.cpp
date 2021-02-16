#include <iostream>
using namespace std;

int main() {
    int n, x, k, tmp;
    cin >> n;
    n = n / 52;

    // 1456
    // 52周
    // 1456 / 52 = 28

    // 28 = 7 * x + 21 * k
    // 28 = 7 * (x + 3 * k)
    // 4 = x + 3 * k
    // n == x + 3 * k

    // n == 7 * x + 21 * k

    for(k=1; k<float(n)/21; k++) {         
        if((n - 21 * k)%7==0) {
            tmp = (n - 21 * k)/7;
            if(0 < tmp && tmp <= 100) {
                x = tmp;
                break;
            }
        }
    }
    
    cout << x << endl << k << endl;
    return 0;
}