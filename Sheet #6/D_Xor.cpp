//TLE solution but brute force
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a,b,q;
    cin>>a>>b>>q;

    if(q==1) cout<<a<<"\n";
    else if(q==2) cout<<b<<"\n";
    else 
    {
        q=q-2;
        long long c;
        while(q>0)
        {
            c=a^b;
            a=b;
            b=c;
            q--;
        }
        cout<<c<<"\n";
    }

    return 0;
}

//Optimised, it works because when you dry run all you get is 3 answer a, b or a^b so...
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a,b,q;
    cin>>a>>b>>q;

    long long res=q%3;

    if(res==1) cout<<a<<"\n";
    else if(res==2) cout<<b<<"\n";
    else cout<<(a^b)<<"\n";

    return 0;
}
