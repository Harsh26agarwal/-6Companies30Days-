#include <bits/stdc++.h>
using namespace std;
int main() {
int n;
cin>>n;
vector<int> a(n);
int i;
for(i=0;i<n;i++)
cin>>a[i];
//map<int,int>  m; 
multiset<int> s;
vector<int>v; 
int max=*max_element(a.begin(), a.end());
for(i=0;i<10;i++)
s.insert(a[i]);
for(i=10;i<n;i++)   
{  
 auto  k=s.begin();
    if(a[i]>=*k)  
    {
    s.insert(a[i]);  
    s.erase(k);
    }
} 
for(auto it=s.begin();it!=s.end();it++)
v.push_back(*it);
for(i=9;i>=0;i--) 
cout<<v[i]<<" ";
return 0;
}
// Time complexity:O(N)*(10*log2(10)) 
=O(N).
