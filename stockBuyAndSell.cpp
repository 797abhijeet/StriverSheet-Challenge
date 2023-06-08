#include <bits/stdc++.h> 
int maximumProfit(vector<int> &prices){
    // Write your code here.
    int cost=0;int profit=0;
    int miniPrice=prices[0];
    for(int i =1;i<prices.size();i++){
        cost=prices[i]-miniPrice;
        profit=max(profit,cost);
        miniPrice=min(miniPrice,prices[i]);
    }
    return profit;
}