#include <bits/stdc++.h>
using namespace std;
bool canPairs(int a[], int n, int k)  
{
	if (n%2)
		return false;
	unordered_map<int, int> m;
	for (int i = 0; i < n; i++)
		m[a[i] % k]++;
	for (int i = 0; i < n; i++) {
		int rem = a[i] % k;
		if (2 * rem == k) {
			if (m[rem] % 2!= 0)
				return false;
		}
		else if (rem == 0) {
			if (m[rem]%2==0)
				return false;}
		else if (m[rem] !=m[k - rem])
			return false;
	}
      return true;
}
