// Problem 750A - New Year And Hurry\
// Re-Solved On 29/12/2023

#include <iostream>

int main(){
    int n, k;
    std::cin >> n >> k;
    int remaining = 240 - k; // Turn into k
    int total = 0, solved = 0;

    for (int i = 1; i <= n; i++){
        total += 5 * i;
        if (total > remaining){
            break;
        }
        solved++;
    }

    std::cout << solved;
}