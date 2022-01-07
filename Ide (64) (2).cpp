class Solution {
public:
    int longestMountain(vector<int>& arr) {
        int n=arr.size(),i,j=-1,k=-1, d=0; 
         if(n<3) 
        return 0; 
        for(i=0;i<n;i++) 
        { 
            if(i==n-1) 
                break;
            if(arr[i+1]>arr[i]) 
            {
                if(k!=-1) 
                { 
                    k=-1;
                    j=-1;
                }
                if(j==-1) 
                {
                    j=i;
                }
            }
            else if(arr[i+1]<arr[i]) 
            { 
                if(j!=-1) 
                {
                    k=i+1;
                }
                if(k!=-1 && j!=-1) 
                    d=max(d,k-j+1); 
            } 
         else 
         {
             k=-1;
             j=-1; 
         } 
        }
        
        return d;
    }
};