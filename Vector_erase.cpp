#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main(){
int n,i,a,b,c;
cin>>n;
vector<int>v(n);
for(i=0;i<n;i++)
{
cin>>v[i];
}
cin>>a;
cin>>b>>c;
v.erase(v.begin()+(a-1));
v.erase(v.begin()+(b-1),v.begin()+(c-1));
cout<<v.size()<<endl;
for(i=0;i<v.size();i++)
{
  cout<<v[i]<<" ";
}
return 0;
}
