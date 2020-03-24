#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int n, c=0;
    cin>>n;
    typedef pair<long long int, long long int> pairs; 
     set<pairs> s; 
    int t=10;
    while(t>0)
    {
         long long int x;
         cin>>x;
        for(int i=1;i<=9;i++)
        {
            long long int k;
            cin>>k;
            pairs p=make_pair(x, k);
            s.insert(p);
            p=make_pair(k, x);
            s.insert(p);
        }
        --t;
    }
    long long int total=(n*(n-1))/2;
    long long int no=s.size()/2;
    cout<<total-no;
}
