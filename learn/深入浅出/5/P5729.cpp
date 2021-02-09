#include<iostream>;
using namespace std;
int main(){
 int w,x,h,q,ans=0;
 int a[22][22][22];
 int x1,y1,z1,x2,y2,z2;
 cin>>w>>x>>h;
 cin>>q;
 for(int i=1;i<=w;i++){
  for(int j=1;j<=x;j++){
   for(int k=1;k<=h;k++){
    a[i][j][k]=1;
   }
  }
 }
 for(int h=0;h<q;h++){
  cin>>x1>>y1>>z1>>x2>>y2>>z2;
  for(int i=x1;i<=x2;i++){
   for(int j=y1;j<=y2;j++){
    for(int k=y1;k<=y2;k++){
     a[i][j][k]=0;
    }
   }
  }
 }
 for(int i=1;i<=w;i++){
  for(int j=1;j<=x;j++){
   for(int k=1;k<=h;k++){
    if(a[i][j][k]==1){
     ans++;
    }
   }
  }
 }
 cout<<ans<<endl;
 return 0;
} 