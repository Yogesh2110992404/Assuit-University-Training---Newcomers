//Basic brute force solution
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin>>n;

    long long cnt=0;
    long long sum=0;
    for(int i=1; sum<=n; i++)
    {
        sum=sum+i;
        if(sum<=n) cnt++;
    }

    cout<<cnt;

    return 0;
}

//Optimised solution - binary search
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin>>n;

    long long start=1;
    long long end=INT_MAX;
    long long ans=-1;
    while(start<=end)
    {
        long long mid=start+(end-start)/2;

        if(mid*(mid+1)<=2*n)
        {
            ans = mid;
            start = mid+1;
        }
        else {
            end = mid-1;
        }
    }

    cout<<ans;
}

//Most optimised solution - sum of n numbers = x, use that as quadratic equation solve for n.
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin>>n;

    cout<<int(  (  -1+sqrt(1+(8*n)) )  / 2 );

    return 0;
}


