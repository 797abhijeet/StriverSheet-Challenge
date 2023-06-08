#include <bits/stdc++.h>

pair<int,int> missingAndRepeating(vector<int> &arr, int n)
{
	pair<int,int>p;
	int sum=0;
	sum=n*(n+1)/2;
	set<int> s;
	for(int i=0;i<n;i++){
		s.insert(arr[i]);
	}
	int sum2=0;
	sum2=accumulate(s.begin(),s.end(),sum2);
	p.first=sum-sum2;
    sort(arr.begin(),arr.end());
	for(int i =0;i<n;i++){
		if(arr[i]==arr[i+1]){
			p.second=arr[i];
			break;
		}
	}
	return p;
}
