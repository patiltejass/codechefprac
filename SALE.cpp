#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int arr[3];
    for (int i = 0; i < 3; i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+3);
    cout<<arr[1]+arr[2]<<endl;
    
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