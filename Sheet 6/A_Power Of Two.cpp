// Naive way is to use loop and check.
// Use log base 2

#include<bits/stdc++.h>
using namespace std;
int main()
{
     long long n;
     cin>>n;
     
     double t=log2(n);
     
     double s=t-(long long) t;
     
     if(s>0) cout<<"NO\n";
     else cout<<"YES\n";
     
     return 0;
}
