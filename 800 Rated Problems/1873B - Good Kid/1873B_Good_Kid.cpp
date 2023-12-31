// Problem 1873B - Good Kid
// Solved On 31/12/2023
// https://codeforces.com/problemset/problem/1873/B
// Explanation given after the solution

#include <bits/stdc++.h>

int main(){
    int t;
    std::cin >> t;
    while (t--){
        int n = 0;
        int snum = 0, output = 1;
        std::cin >> n;
        int num[n];
        for (int i = 0; i < n; i++){
            std::cin >> num[i];
        }
        std::sort(num, num + n);
        num[0] += 1;
        for (int i = 0; i < n; i++){
            output *= num[i];
        }
        std::cout << output << std::endl;
    }
}

// Basically We first find the smallest number by the sort number
// Since the smallest will be at the 0th index, we add 1 to it
// Then we get the answer by multiplying over each
// TOOK ME 45 MINUTES BECAUSE I COULDNT FIGURE OUT THIS SORT() FUNCTION