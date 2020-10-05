#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define rep(i,a,n) for(ll i=a;i<n;i++)
#define rev(i,n,a) for(ll i=n-1;i>=a;i--)
#define f first
#define s second
#define vll vector<ll>
#define vvll vector<vector<ll>>
#define vpii vector<pair<int,int>>
#define vpll vector<pll>
#define pll pair<ll,ll>
#define secreterror() ios_base::sync_with_stdio(false);cin.tie(NULL);
vector<ll>vis;
vector<ll>adj[51];
//π¡Lé$h 
void dfs(ll a){
    vis[a]=true;

    for(auto j:adj[a]){
        if(!vis[j]){
            dfs(j);
        }
    }
}
void solve(){
    ll n;
    cin>>n;

    vll arr(n);
    rep(i,0,n) cin>>arr[i];

    vis=vll(51,0);
  for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(__gcd(arr[i],arr[j])==1){
                adj[i].push_back(j);
                adj[j].push_back(i);
            }
        }
    }
    ll cc=0;
   for(int i=0;i<n;i++){
       if(!vis[i]){
           cc++;
           dfs(i);
       }
    }
    if(cc==1){
        cout<<"0"<<endl;
        rep(i,0,n){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
    else{
        cout<<"1"<<endl;
        ll pos=-1;
        ll cnt=0;
       
        for(int i=0;i<n;i++){
            if(arr[i]==47){
                cnt++;
            }
        }
        if(cnt==n){
            arr[0]=2;
            for(int i=0;i<n;i++){
                cout<<arr[i]<<" ";
            }
            cout<<endl;}
        else
        {
            arr[0]=47;
            for(int i=0;i<n;i++){
                cout<<arr[i]<<" ";
            }
            cout<<endl;
            }
    }
    for(int i=0;i<=50;i++){
        adj[i].clear();
        vis[i]=0;
    }
}
  int main()
  {
    secreterror()
    ll t;
    cin>>t;
    while(t--){
        solve();
       //π¡Lé$h 
   }
}
