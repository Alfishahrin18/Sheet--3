1.// Problem name:  (M) Replace MinMax.
2.// Course title: Competitive Programming Sessional
3.// Course code: CCE-2310
4.// Course teacher name: Mirza Raquib
5.// Date: 16/6/25

#include <bits/stdc++.h>
using namespace std;

int main() {
int n, a[1000];
 cin>>n;

int minI = 0, maxI = 0;
for (int i = 0; i<n;i++) {
    cin >> a[i];
    if (a[i] < a[minI]) minI = i;
    if (a[i] > a[maxI]) maxI = i;
}
swap(a[minI], a[maxI]);

for (int i = 0; i<n;i++)
  cout<< a[i] << " ";
}
