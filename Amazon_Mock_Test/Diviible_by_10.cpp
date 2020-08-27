#include <bits/stdc++.h>
using namespace std;

void subsetsUtil(vector<long long int>& A, set<vector<long long int> >& ans, 
                 vector<long long int>& subset, int index) 
{ 
    ans.insert(subset); 
    for (int i = index; i < A.size(); i++) { 
  
        // include the A[i] in subset. 
        subset.push_back(A[i]); 
  
        // move onto the next element. 
        subsetsUtil(A, ans, subset, i + 1); 
  
        // exclude the A[i] from subset and triggers 
        // backtracking. 
       // subset.pop_back(); 
       set<vector<long long int>>::iterator it; 
  
    // Get the positionOfElementToBeDeleted 
    // using method 1 
    it = prev(ans.end()); 
  
    // Erase the last element 
    // currently pointed by the iterator 
    ans.erase(it); 
    } 
  
    return; 
} 

set<vector<long long int> > subsets(vector<long long int>&A) 
{ 
    vector<long long int> subset; 
    set<vector<long long int> > ans; 
  
    // keeps track of current element in vector A; 
    int index = 0; 
    subsetsUtil(A, ans, subset, index); 
  
    return ans;
} 

int main() {
	long long int num;
	cin >> num;		
	vector<long long int> A(num);
	long long int x=0, count=0;
	for(int i=0;i<num;i++){
	long long int y;
	cin>>y;
	A.push_back(y);
	}
	set<vector<long long int>> ans = subsets(A);
	set<vector<long long int>>::iterator it;
    for (auto it : ans) { 
        vector<long long int> v= it;
        for (int j = 0; j < v.size(); j++) {
          x = x^v[j];  
        }
        if(!x)
        count++;
    } 
	cout<<count;
}
