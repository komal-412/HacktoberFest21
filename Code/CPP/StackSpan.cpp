#include<bits/stdc++.h>
using namespace std;


class Solution
{
    public:
    //Function to calculate the span of stockâ€™s price for all n days.
    vector <int> calculateSpan(int price[], int n)
    {
       vector<int>index;
       vector<int>ans(n);
       stack<pair<long int,int>>s;
       
       for(int i=0;i<n;i++){
           
           while(!s.empty() && s.top().first<=price[i]){
               s.pop();
           }
           
           if(s.empty())
           index.push_back(-1);
           
           else
           index.push_back(s.top().second);
           
           s.push({ price[i], i });
       }
       
       for(int i=0;i<n;i++){
           ans[i]= i-index[i];
       }
       
       return ans;
    }
};

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int i,a[n];
		for(i=0;i<n;i++)
		{
			cin>>a[i];
		}
		Solution obj;
		vector <int> s = obj.calculateSpan(a, n);
		
		for(i=0;i<n;i++)
		{
			cout<<s[i]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
