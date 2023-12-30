// Problem 750A - New Year And Hurry
// Re-Solved On 29/12/2023
// https://codeforces.com/problemset/problem/750/A
// Explanation given after the code

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

// We first take the inputs then calculate the 'remaining' which is the time to solve problems if we want to reach the party
// By, subtracting 'k' from 4*60 (4 hours in minutes)
// We define the total minutes used to solve problems variable and the 'solved' questions variable
// We keep iterating till all the problems are done
// For each iteration, we multiply i (the index of the question) and 5, to find out the time taken and add it to the total
// Then if the total is greater than the time left 'remaining' then we stop the for loop
// But if the total is lesser than 'remaining' then we add 1 to the no. of problems that can be solved and keep iterating
