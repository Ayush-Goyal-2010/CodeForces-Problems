// Problem 1691A - Beat The Odds
// Solved On 02/01/2023
// https://codeforces.com/problemset/problem/1691/A
// Explanation given after the code

#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;
		vector<int> a(n);
		for (int i = 0; i < n; ++i)
			cin >> a[i];
		int num_odd = 0;
		for (auto x : a)
			if (x & 1)
				num_odd++;
		cout << min(num_odd, n - num_odd) << endl;
	}
	return 0;
}

// Basically only even or only odd numbers can be in the array
// So find how many odd and how many even then just remove the minimum