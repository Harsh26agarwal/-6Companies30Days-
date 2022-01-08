class Solution{
public:	
void matchPairs(char nuts[], char bolts[], int n){
char a[]={'!','#','$','%','&','*','@','^','~'};
map<char, int> m1; 
map<int,char> m2; 
int i;
for(i=0;i<9;i++) 
m1[a[i]]=i;
for(i=0;i<9;i++) 
m2[i]=a[i]; 
vector<int> vn,vb;
for(i=0;i<n;i++) {
vn.push_back(m1[nuts[i]]);
vb.push_back(m1[bolts[i]]);
}
sort(vb.begin(),vb.end());
sort(vn.begin(),vn.end());
for(i=0;i<n;i++) 
nuts[i]=m2[vn[i]];
for(i=0;i<n;i++) 
bolts[i]=m2[vb[i]]; 
	}
};