#include<iostream>
using namespace std;
int main(){
    int n, a[105], ans=0;
    cin >> n;
    for(int i=0; i<n; i++) {
        cin >> a[i];
    }

    for(int i=0; i<n; i++) {
        for(int j=i+1; j<n; j++) {
            for(int k=j+1; k<n; k++) {
                if(a[i] == a[j] + a[k] || a[j] == a[i] + a[k] || a[k] == a[i] + a[j]) {
                    ans++;
                }
            }
        }
    }
    
    cout<<ans<<endl;
	return 0;
}