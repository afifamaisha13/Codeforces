#include<bits/stdc++.h>
using namespace std;
void lucky(int a,int b){
    int c=0;
    //int m=a;
    for(int i=a;i<=b;i++){
        int p=i;
        bool flag=false;
        while(p!=0){
         int r=p%10;
         
         if(r!=4 && r!=7)
         flag=true;
         
         p/=10;
         
         
        }
        
        if(!flag){
        cout<<i<<" ";
        c++;
        }
        
    }
    
    if(c==0)
    cout<<"-1";
    
    
}

int main(){
    int a,b;
    cin>>a>>b;
    lucky(a,b);
}
