#include <bits/stdc++.h>
using namespace std;
int main() {
	int m,n,r, ans=0;
cin>>m>>n;
vector<int> a;
for(int i=0;i<m;i++){
	int x;
	cin>>x;
	a.push_back(x);
}
make_heap(a.begin(), a.end());
while(n--){
	ans+=a.front();
	a.front()=a.front()-1;
	make_heap(a.begin(), a.end());
}
cout<<ans;
}
