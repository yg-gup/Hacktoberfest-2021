#include<bits/stdc++.h>
 
#define ll long long
#define FIO ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
 
using namespace std;
 int main()
{
  int n,i,j,s1=0,s2=0;
  cin>>n;
  int a[n][2];
  int temp;
  for(i=0;i<n;i++)
  for(j=0;j<2;j++){
      cin>>a[i][j];
  }
  for(i=0;i<n;i++)
  {
      s1+=a[i][0];
      s2+=a[i][1];
  }
  if(s1%2!=0 && s2%2==0)
     cout<<"-1";
   else if(s1%2==0 && s2&2!=0)
      cout<<"-1";
   else if(s1%2==0 && s2%2==0)
      cout<<"0";
    else{
      // if(s1%2!=0 && s2%2!=0){
        for(i=0;i<n;i++)
        {   
            temp=a[i][0];
            a[i][0]=a[i][1];
            a[i][1]=temp;
             s1=0;
             s2=0;
            for(j=0;j<n;j++){
                 s1+=a[j][0];
                 s2+=a[j][1];
            }
           // cout<<s1<<endl<<s2<<endl;
            if(s1%2==0 && s2%2==0){
                cout<<"1";
                break;
            }
            }
        //}
       }
        if(s1%2!=0 && s2%2!=0)
           cout<<-1;
        
 return 0;   
}