#include<bits/stdc++.h>
using namespace std;

void print(const int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <=i; j++) {
            cout << "* ";
        }
        cout << "\n";
    }
}

int main() {
    cout << "Enter the number of test cases:";
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
    cout << "Enter the number:";
    int n;
    cin >> n;
    print(n);
    }
}