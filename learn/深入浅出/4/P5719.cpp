#include <iostream>
using namespace std;

int main() {
    int n, k, sn=0, sb=0, cntn=0, cntb=0, number;
    cin >> n >> k;
    for(int i=1; i<=n; i++) {
        number = i;
        if(number%k==0) {
            sn += number;
            cntn++;
        } 
        else {
            sb += number;
            cntb++;
        }
    }
    printf("%.1f %.1f", float(sn)/cntn, float(sb)/cntb);
    return 0;
}