// Problem 546A - Soldier And Bananas
// Re-Solved On 29/12/2023
// https://codeforces.com/problemset/problem/546/A
// Explanation given after the code

#include <iostream>

int main(){
    int k, n, w;
    std::cin >> k >> n >> w;
    int total;
    for (int i = 1; i <= w; i++){
        total += k * i;
    }
    if (total > n){
        std::cout << total - n - 1;
    }
    else{
        std::cout << 0;
    }
}

// We first take in all the inputs and define a variable 'total' for keeping the total cost of the bananas
// Then we iterate over each banana, to find out cost of each and then add it to 'total' by multiplaying the no. of banana (i)
// And the cost of one banana (k)
// To find out the cost to be borrowed, we check if the 'total' is more than n
// If it is more then we print the difference between 'total' and 'n' and subtract 1 for the discrepancy
// If it is less then we simply print 0
