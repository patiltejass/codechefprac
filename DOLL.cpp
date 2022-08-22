#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n,h,ans=0;
    int arr[n];
    cin>>n>>h;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    for (int i=0 ;i<n;i++){
        if(arr[i]>h)
            ans++;
    }
    cout<<ans<<endl;   
    
}

int main()
{
    int T;  
    cin>>T;
    for(int c=1;c<T+1; c++)
    {
        solve();
    }

    return 0;    
}