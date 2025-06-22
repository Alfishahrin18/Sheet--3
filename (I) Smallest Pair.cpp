1.// Problem name: (I) Smallest Pair.
2.// Course title: Competitive Programming Sessional
3.// Course code: CCE-2310
4.// Course teacher name: Mirza Raquib
5.// Date: 16/6/25

#include<bits/stdc++.h>
using namespace std;
int main()
{
long long t ;
cin>>t;
while (t--)
    {
    long long n;
    cin>>n;
    long long a[n+1];
    for(long long i=1;i<=n;i++){
     cin>>a[i];
}
    long real_ans = 10000000;
    for(long long i=1;i<=n-1;i++){
        for(long long j=i+1;j<=n;j++)
            {
long long ans = a[i] + a[j]+ (j-i) ;
if(ans < real_ans)
real_ans=ans;
}
}
    cout<< real_ans <<endl;
}
}
