1.// Problem name:  (K) Sum Digits.
2.// Course title: Competitive Programming Sessional
3.// Course code: CCE-2310
4.// Course teacher name: Mirza Raquib
5.// Date: 16/6/25

#include <iostream>
using namespace std;

int main() {
 int n, sum = 0;
 cin>>n;
  while (n--) {
char d;
cin>>d;
sum = sum + (d - '0');
}
cout << sum;
}
