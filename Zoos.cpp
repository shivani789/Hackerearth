#include<iostream>
#include<string>
using namespace std;
int main()
{
    int c1=0,c2=0;
    string s;
    cin>>s;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='z')
        c1++;
        else if(s[i]=='o')
        c2++;
    }
    if(c2==2*c1)
    cout<<"Yes";
    else
    cout<<"No";
}
