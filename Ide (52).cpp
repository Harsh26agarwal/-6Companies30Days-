#include <bits/stdc++.h>
using namespace std;
int main() {
int n;
cin>>n;
vector<int> a(n);
int i;
for(i=0;i<n;i++)
cin>>a[i];
map<int,int>  m;      
vector<int>v; 
int   k,c=0;
int max=*max_element(a.begin(), a.end());
for(i=0;i<n;i++)
m[max-a[i]]++;
for(auto  it:m)  
{  
    k=it.second;
    while(k--)  
    {  
    v.push_back(max-it.first);
    c++;  
    }   
    if(c==10)  
    break;  
}  
cout<<v.size()<<endl;   
for(auto  it:  v)
cout<<it<<" ";
	return 0;
}