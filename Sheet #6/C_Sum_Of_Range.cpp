//We can do tha using loop
//but lets try new way

#include<bits/stdc++.h>
using namespace std;
int main()
{
     long long a,b;
     cin>>a>>b;
     
     if(a>b) swap(a,b);

     long long sum=0;
     sum=( (b*(b+1))/2 ) - ( (a*(a+1))/2 ) + a;
     
     long long even=0;

     if(a%2==0 && b%2==0) even=( (b*(b+2))/4 ) -  ( (a*(a+2))/4 ) + a;
     else if(a%2!=0 && b%2==0) even=( (b*(b+2))/4 ) -  ( ((a-1)*(a+1))/4 );
     else if(a%2==0 && b%2!=0) even=( ((b-1)*(b+1))/4 ) -  ( (a*(a+2))/4 ) + a;
     else even=( ((b-1)*(b+1))/4 ) -  ( ((a-1)*(a+1))/4 );
     
     long long odd=0;
     long long full=(b+1)/2;
     long long half=(a+1)/2;
     if(a%2==0 && b%2==0) odd=(full*full) - (half*half);
     else if(a%2!=0 && b%2==0) odd=(full*full) - (half*half) + a;
     else if(a%2==0 && b%2!=0) odd=(full*full) - (half*half);
     else odd=(full*full) - (half*half) + a;

     cout<<sum<<"\n";
     cout<<even<<"\n";
     cout<<odd<<"\n";
     
     return 0;
}

//Simplified
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a,b;
    cin>>a>>b;

    if(a>b) swap(a,b);

    a--;

    cout<< ( (b*(b+1))/2 - (a*(a+1))/2 ) <<"\n";
    cout<< ( ((b/2)*(b/2+1)) - ((a/2)*(a/2+1)) )<<"\n";
    cout<< ( (b*(b+1))/2 - (a*(a+1))/2 ) - ( ((b/2)*(b/2+1)) - ((a/2)*(a/2+1)) ) <<"\n";

    return 0;
}

//Just another logic where sum of all the odd numbers is k^2 where k all the odd numbers availble between 1 to n
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a,b;
    cin>>a>>b;

    if(a>b) swap(a,b);

    long long all=( (b*(b+1))/2 ) - ( ((a-1)*a)/2 );
    long long eve=( (b/2)*((b/2)+1) ) - ( ((a-1)/2) * (((a-1)/2)+1) );
    long long odd=( ( ( (b+1)/2 ) * ( (b+1)/2 ) )- ( (a/2) * (a/2) ) );

    cout<< ( (b*(b+1))/2 ) - ( ((a-1)*a)/2 )<<"\n";
    cout<< ( (b/2)*((b/2)+1) ) - ( ((a-1)/2) * (((a-1)/2)+1) )  <<"\n";
    cout<< ( ( ( (b+1)/2 ) * ( (b+1)/2 ) )- ( (a/2) * (a/2) ) ) <<"\n";

    return 0;
}
