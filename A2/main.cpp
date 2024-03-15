#include <bits/stdc++.h>
#include <vector>
using namespace std;


void f(vector<int>ans,vector<int>adj [],int n){

for(int i=1;i<=n;i++){
  ans[i]=
}


}

int main() {

int n;
cin>>n;
vector<int>arr(n+1,-1);
vector<int> adj[n+1];
vector<int>ans(n+1,0);
for(int i=2;i<n;i++){
  cin>>arr[i];
  adj[arr[i]].push_back(i);
}

f(ans,adj,n);

}