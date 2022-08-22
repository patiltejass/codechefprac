#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n,total=0;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin>>arr[i];

    for (int i = 0; i < n; i++){
            if(arr[i]>=10 && arr[i]<=60)
                total++;
    }
    cout<<total<<endl;
    
    
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