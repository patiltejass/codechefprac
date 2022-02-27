#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int arr[7];
    for (int i = 0; i < 7; i++)
        cin>>arr[i];
    
    int a= count(arr,arr+7,1);
    int b= count(arr,arr+7,0);

    if(a>b)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    
    
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