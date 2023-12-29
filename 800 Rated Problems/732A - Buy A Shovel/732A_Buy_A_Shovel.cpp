// Problem 732A - Buy A Shovel
// Re-Solved On 29/12/2023

#include <iostream>

int main(){
    int k, r;
    std::cin >> k >> r;
    int count = 1;
    int value = k;
    int i = 2;
    while (true) {
        if (value % 10 == r || value % 10 == 0){
            std::cout << count;
            break;
        }
        value = k * i;
        count++;
        i++;
    }
}