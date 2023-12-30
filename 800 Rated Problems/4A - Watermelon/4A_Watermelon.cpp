// Problem 4A - Watermelon
// Re-Solving On 29/12/2023
// https://codeforces.com/problemset/problem/4/A
// Explanation given after the code

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

// The problem requires us to split the watermelon into 2 even numbers' weight
// We must check if the number is even or odd, by finding out the remainder throught the modulus "%"
// If the number is Even, then we can pass YES, as when an even numbers is divided the quotient is also even OR the remainder is 0
// If the number is Odd, then we can pass NO, as when an even numbers is divided the remainder is 1
// However, 2 is an execption as when 2 is divided by 2 it gives 1 which is an odd number.
// Therefore, an exception is to be printed out that is NO
