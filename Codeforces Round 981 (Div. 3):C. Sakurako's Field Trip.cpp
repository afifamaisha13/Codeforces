#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int>a(n);
        for(int i=0;i<n;i++ )
        {
            cin>>a[i];
        }
        for(int i=n/2-1;i>=0;i--){
            if(a[i]==a[i+1]|| a[n-i-1]==a[n-i-2] )
            swap(a[i],a[n-i-1]);
        }
        
        int c=0;
        for(int i=0;i<n;i++){
            if(a[i]==a[i-1])
            c++;
        }
        
        cout<<c<<endl;
           
        }
    } 
