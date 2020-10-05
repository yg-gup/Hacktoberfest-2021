#include<bits/stdc++.h>
 
#define ll long long
#define FIO ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
 
using namespace std;
int main(){
  int n,m;
  cin>>n;
   double a[n];
   int i,j;
  for(i=0;i<n;i++){
      cin>>a[i];
  }
  cin>>m;
  double b[m];
  for(j=0;j<m;j++){
      cin>>b[j];
  }
  double gear;
  int cnt=0;
  vector<int> v;
  int max;
  for(i=0;i<n;i++)
  for(j=0;j<m;j++){
      gear=b[j]/a[i];
      if(gear==int(gear)){
          v.push_back(gear);
      }
  }
  max=v[0];
  for(i=1;i<v.size();i++){
      if(max<v[i]){
         max=v[i];
         cnt=0;
      }
      else if(max==v[i])
        cnt++;
  }
  //cout<<max;
  cout<<cnt+1;
 return 0;   
}