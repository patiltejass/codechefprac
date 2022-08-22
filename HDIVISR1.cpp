#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,ans;
    cin>>n;
    for (int i = 10; i > 0; i--)
    {
        if(n%i==0){
            ans=i;
            break;
        }

    }
            
    cout<<ans<<endl;
    return 0;
}
