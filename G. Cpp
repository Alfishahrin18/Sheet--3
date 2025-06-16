1.// Problem name:  G. Palindrome Array
2.//Course title: Competitive Programming Sessional 
3.//Course code: 2310
4.// Course teacher name: Mirza Raquib
5.//Date: 02/6/25
#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n;
    cin >> n;
    long long a[n];

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    bool flag = true;
    long i = 0;
    long j = n - 1;

    while (i <= j) {
        if (a[i] != a[j]) {
            flag = false;
            break;
        }
        i++;
        j--;
    }

    if (flag == true) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
