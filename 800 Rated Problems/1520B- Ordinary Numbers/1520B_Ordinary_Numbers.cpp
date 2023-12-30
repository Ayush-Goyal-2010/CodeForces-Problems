// Problem 1520B - Ordinary Numbers
// Solved On 30/12/2023

#include <bits/stdc++.h>

int main(){
    int t;
    std::cin >> t;
    while (t--){
        long long n, count = 0, start;
        std::cin >> n;
        for(int i = 1; i <= 9; i++){
            start = i;
            while (start <= n){
                count++;
                start = start * 10 + i;
            }
        }
        std::cout << count << std::endl;
    }
    
}

