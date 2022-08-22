#include<bits/stdc++.h>
using namespace std;

void solve()
{
   int n,x;
   cin>>n>>x;
   int arr[n];
   for(int i : arr){
       cin>>i;
       if(i<=x){
           cout<<"1";
           x=x-i;
       }
       else
            cout<<"0";
   }
   cout<<endl;
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