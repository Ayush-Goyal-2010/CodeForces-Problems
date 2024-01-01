// Problem 1368A - C+=
// Solved On 01/01/2024
// https://codeforces.com/problemset/problem/1368/A
// Explanation given after the code

#include <bits/stdc++.h>

int main(){
    int t;
    std::cin >> t;
    while (t--){
        int a, b, n;
        std::cin >> a >> b >> n;
        int count = 0;
        while (a <= n && b <= n){
            if (a <= b){
                a += b;
                count++;
            }
            else if (a > n){
                break;
            }
            else if (b <= a){
                b += a;
                count++;
            }
            else if (b > n){
                break;
            }
        }
        std::cout << count << std::endl;
    }
}

// Basically make a fibonacci sequence and check if it is greater than n