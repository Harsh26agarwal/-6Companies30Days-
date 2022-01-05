class Solution {
  public:
    int findPosition(int n , int m, int k) {  
          if(n>=k+m-1) 
           return k+m-1;
           else {
           m=m-(n-k+1); 
            if(m%n)
           return   m%n;     
           return   n;   }  
           } 
    };