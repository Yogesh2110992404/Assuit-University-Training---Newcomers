//Loop till n
//Loop till n/2
//Loop till sqrt(n)

#include<bits/stdc++.h>
using namespace std;
int main()
{
     long long n;
     cin>>n;
     
     if(n==1) cout<<"NO\n";
     else if(n==2) cout<<"YES\n";
     else 
     {
          bool flag=true;
          for(int i=2; i<=sqrt(n); i++)
          {
               if(n%i==0) 
               {
                    flag=false;
                    break;
               }
          }
          
          if(flag) cout<<"YES\n";
          else cout<<"NO\n";
     }
     
     return 0;
}
