#include <bits/stdc++.h>
using namespace std;

int main() {
	string  s; 
	cin>>s; 
	stack<int> st;
	int   i,n=s.size(),c=1;
	for(i=0;i<n;i++)  
       {
        char    ch=s[i]; 
        if(ch=='D') 
          { 
             st.push(c);
               c++;  
          }
          else  
           { 
              st.push(c); 
              c++; 
              while(!st.empty()) 
              { 
                 cout<<st.top()<<" ";  
                 st.pop(); 
              } 
           }  
       }  
      st.push(c);    
      while(!st.empty())  
      {  
          cout<<st.top()<<" "; 
          st.pop(); 
      }
	return 0;
}
