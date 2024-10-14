#include <iostream>
using namespace std;

const int MOD = 1e9 + 7;

int countNumbers(int n, int k, int sum) {
    if(n == 1) { // trı?ng h?p cõ b?n: ch? có m?t ch? s?
        if(sum <= k && sum > 0) {
            return 1; // n?u t?ng b?ng K th? tr? v? 1, ngı?c l?i tr? v? 0
        } else {
            return 0;
        }
    } else { // trı?ng h?p ğ? quy: có nhi?u hõn m?t ch? s?
        int count = 0;
        for(int i = 1; i <= 9; i++) {
            if(sum + i <= k) {
                count += countNumbers(n-1, k, sum+i); // ğ? quy v?i n-1 ch? s? và t?ng m?i
                count %= MOD; // l?y ph?n dı ğ? gi? cho count nh? hõn ho?c b?ng 10^9+7
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

