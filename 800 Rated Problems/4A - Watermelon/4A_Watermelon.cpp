// Problem 4A - Watermelon
// Re-Solving On 29/12/2023

#include <iostream>

int main(){
    int w;
    std::cin >> w;

    if (w == 2){
        std::cout << "NO";
    }
    else if (w % 2 == 1){
        std::cout << "NO";
    }
    else if (w % 2 == 0){
        std::cout << "YES";
    }
}