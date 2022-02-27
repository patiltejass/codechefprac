#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,maxi=0;
    cin>>n;
    for (int i = 1; i < 10; i++)
    {
        if(n%i==0)
            maxi = i;
    }
    cout<<maxi<<endl;
return 0;
}
