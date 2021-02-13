#include<iostream>
using namespace std;
int main (){
    int m,n,min=0,s=0,a[3005];
    cin>>n>>m;

    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    for(int i=0; i<m; i++) {
        min = min + a[i];
    }
    s = min;

    for(int i=1; i<n-m+1; i++){
        s = s - a[i-1] + a[i+m-1];

        // for(int j=0;j<m;j++){
        //     s=s+a[i+j];
        // }

        if(s<min){
            min=s;
        }
    }

    cout<<min<<endl;
    return 0;

    // 如何找最小值
}