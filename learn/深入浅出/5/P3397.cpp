#include<iostream>
#include<cstdio>
#include<cstring>
#define MAXN 55
using namespace std;
int main (){
 int m,n,a[MAXN][MAXN],x1,x2,y1,y2;
 memset(a,0,sizeof(a));
 cin>>n>>m;
 for(int i=1;i<=m;i++){
  cin>>x1>>y1>>x2>>y2;
  for(int j=x1;j<=x2;j++){
   for(int h=y1;h<=y2;h++){
    a[j][h]++;
   }
  } 
 }
 for(int i=1;i<=n;i++){
  for(int j=1;j<=n;j++){
   cout<<a[i][j]<<(j==n?'\n': ' ');
   
  }
 }
 return 0;
}