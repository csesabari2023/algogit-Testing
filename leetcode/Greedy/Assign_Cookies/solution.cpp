class Solution {
public:
int findContentChildren(vector<int>& g,
vector<int>& s) {
sort(g.begin(),g.end());
sort(s.begin(),s.end());
int gsize=g.size();
int ssize=s.size();
int j=0;
int count=0;
for(int i=0;i<ssize;i++){
if(j>=gsize)break;
if(s[i]>=g[j]){
count++;
j++;
}
return count;