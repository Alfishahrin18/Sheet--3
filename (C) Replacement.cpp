1.// Problem name: (C) Replacement.
2.// Course title: Competitive Programming Sessional
3.// Course code: CCE-2310
4.// Course teacher name: Mirza Raquib
5.// Date: 26/5/25

#include<bits/stdc++.h>
using namespace std;
int main()
{
int n;
cin>>n;
int arr[n];
for(int i= 0; i < n; i++)
    {
    cin>>arr[i];
    }
    
for(int i=0;i < n; i++)
    {
        if(arr[i]<0){
            cout<<" "<<"2";
        }
else if (arr[i]>0){
    cout<<" "<<"1";
}
else {
cout<<" "<<"0";
}
}
}
