#include<bits/stdc++.h>
using namespace std;
void solve(int n,int m){
    
    long long sum=0;
    for(int i=2;i<=m;i+=2){
        sum+=pow(n,i);
    }
    cout<<sum;
}

int main(){
    int n,m;
    cin>>n>>m;
    solve(n,m);
}
