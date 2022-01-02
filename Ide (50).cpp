class Solution{
  public:
    vector<vector<string> > Anagrams(vector<string>& v) {
     map<string,vector<string>> m;
     int i;
     for(i=0;i<v.size();i++)
     {
         string s=v[i];
         sort(s.begin(),s.end());
         m[s].push_back(v[i]);
     }
     vector<vector<string>> ans(m.size());
     int j=0;
     for(auto x: m)
     {
         auto a=x.second;
         for(i=0;i<a.size();i++)
         {
             ans[j].push_back(a[i]);
         }
         j++;
         
     }
     return ans;
    }
};
