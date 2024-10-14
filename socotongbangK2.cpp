#include <iostream>
using namespace std;

const int MOD = 1e9 + 7;

int countNumbers(int n, int k, int sum) {
    if(n == 1) { // tr�?ng h?p c� b?n: ch? c� m?t ch? s?
        if(sum <= k && sum > 0) {
            return 1; // n?u t?ng b?ng K th? tr? v? 1, ng�?c l?i tr? v? 0
        } else {
            return 0;
        }
    } else { // tr�?ng h?p �? quy: c� nhi?u h�n m?t ch? s?
        int count = 0;
        for(int i = 1; i <= 9; i++) {
            if(sum + i <= k) {
                count += countNumbers(n-1, k, sum+i); // �? quy v?i n-1 ch? s? v� t?ng m?i
                count %= MOD; // l?y ph?n d� �? gi? cho count nh? h�n ho?c b?ng 10^9+7
            }
        }
        return count;
    }
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n, k;
        cin >> n >> k;
        int count = countNumbers(n, k, 0);
        cout << count << endl;
    }
    return 0;
}

