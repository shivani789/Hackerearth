#include <bits/stdc++.h>
using namespace std;
int main() {
string s;
getline(cin, s);
int i, ans=0;
for(i=0;i<s.length();i++){
	if(s[i]==' ')
		break;
}
string p = s.substr(0, i);
string q = s.substr(i+1);
map<char, int> m;
for(int i = 0; i<p.length();i++)
m[p[i]]=0;
for(int i = 0; i<q.length();i++){
	if(m.find(q[i])!=m.end())
		ans++;
}
cout<<ans<<endl;
}


