// Problem 1520B - Ordinary Numbers
// Solved On 30/12/2023
// https://codeforces.com/problemset/problem/732/A
// Explanation given after the code

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

// We take the inputs and iterate over each testcase through each
// We define a long long datatype as the dataset is 10^9
// The 'count' is to keep track of how many ordinary numbers are there annd start is to to increase the dataset by *10
// All the possible iterations can only be 1, 11, 111 .... and same with 2, 3 ... 9
// With this logic we iterate from 1 - 9
// Start will be i to go from 10 - 100 - 1000 (*10)
// while the start is lesser than n, our number, we keep on iterating
// On each iteration we increase the no. of ordinary numbers
// we also increase our dataset to the next ordinary number in the i'series (if i = 1, then series is 1, 11, 111....)

