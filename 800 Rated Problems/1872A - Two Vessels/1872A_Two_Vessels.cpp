// Probelm 1872A - Two Vesseks
// Solving On 01/01/2024
// https://codeforces.com/problemset/problem/1872/A
// Explanation given after the code

#include <bits/stdc++.h> 

int main(){
    int t;
    std::cin >> t;
    while (t--){
        int a, b, c;
        std::cin >> a >> b >> c;
        
        double A = std::max(a, b);
        double B = std::min(a, b);
        int count = 0;
        while (A > B){
            count++;
            int sub = A - B;
            if (sub >= c){
                A = A - c;
                B = B + c;
            }
            else {
                double sub2 = (A - B) / 2;
                A = A - sub2;
                B = B + sub2; 
            }
        }
        std::cout << count << std::endl;
    }
}

// This is a rather weird question
// Basically, we first have to find the largest and the smallest number for easier calculation
// Until both the numbers are equal, the loop keeps on running and increments count every time it runs
// The difference between these 2 numbers is used to check
// If it is more than c, then we simply subtract c from one and add it to the other
// Else we take the sum and divide it by 2 and add and subtract respectively