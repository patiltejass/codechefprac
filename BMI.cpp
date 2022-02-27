#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int h,m;
    cin>>m>>h;
    int bmi=m/(h*h);
    if(bmi<=18)
        cout<<"1"<<endl;
    else if (bmi>18 && bmi<=24)
        cout<<"2"<<endl;
    else if (bmi>=25 && bmi<=29)
        cout<<"3"<<endl;
    else
        cout<<"4"<<endl;

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