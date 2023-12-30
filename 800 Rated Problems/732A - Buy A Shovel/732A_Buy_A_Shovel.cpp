// Problem 732A - Buy A Shovel
// Re-Solved On 29/12/2023
// https://codeforces.com/problemset/problem/732/A
// Explanation given after the code

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

// We take the inputs, then we define 'count' as 1 as it is the minimum amount and he will take atleast 1 shovel
// Then we define 'value' which is a clone of 'k', the cost of one shovel
// Then we define "i" which is the multiplicant, i.e what it will be multiplied from
// Now since the guy has infinite coins, we use while(true) 
// Now, if the last digit (remainder when divided by 10) is equal to 'r OR the remainder is 0 
// We simply print the count at that point
// Else we multiply the value by k and the multiplicant to change the last digit
// Then we increase the count as the number of shovels has increased
// We also increase the multiplicant "i" by 1 to change the multiplicant and go through each digit
