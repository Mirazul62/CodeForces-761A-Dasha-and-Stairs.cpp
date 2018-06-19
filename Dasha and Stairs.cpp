#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,m;
    cin>>n>>m;
    if(abs(n-m)>1 || (n==0 && m==0))
        cout<<"NO";
    else if( n!=0 || m!=0 || abs(n-m)==1 ||abs(n-m)==0)
        cout<<"YES";
}
