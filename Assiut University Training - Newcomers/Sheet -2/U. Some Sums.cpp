#include<bits/stdc++.h>
using namespace std;
void sum(int n,int a,int b){
   int c=0;
   for(int i=1;i<=n;i++){
       int p=i;
       int s=0;
       while(p!=0){
           int r=p%10;
           s+=r;
           p/=10;
       }
       
       if(s>=a && s<=b)
       c+=i;
   }
   
   cout<<c<<endl;
    
    
}

int main(){
    int n,a,b;
    cin>>n>>a>>b;
    sum(n,a,b);
}

