

// the code has been tested for various test case as see the output screen shot 
// this code is in c++

#include<bits/stdc++.h>
using namespace std;

// main function of the program
int main()
{
	// taking a input as a string 
	
	vector<string> v;
	
	string s;
	getline(cin,s);
	
	stringstream ss(s);
	while(ss>>s)
	{
		v.push_back(s);
	}
	
	
	// base case
	if(v.size()==1)
	{
		cout<<v[0];
		return 0;
	}
	else 
	{
		vector<vector<string>> ans;
		
		unordered_map<string,vector<string>> mp;
		
		for(int i=0;i<v.size();i++)
		{
			string s1=v[i];
			sort(v[i].begin(),v[i].end());
			
			mp[s1].push_back(v[i]);
			
		} 
		
		// output is tested for various test cases
		for(auto i:mp)
		{
			vector<string> vs(i.second);
			
			int n=vs.size();
			for(int i=0;i<n;i++)
				cout<<vs[i]<<" ";
			
		} 
		
		
	}
	
	
}
