// Problem 546A - Soldier And Bananas
// Re-Solved On 29/12/2023

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