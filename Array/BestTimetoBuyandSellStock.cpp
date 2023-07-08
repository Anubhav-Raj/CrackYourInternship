#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    // Time Complexity O(N)  and Space Complexity O(N)
    //     int maxProfit(vector<int>& prices) {
    //           int n = prices.size();
    //          vector<int>aux(n);
    //            aux[n-1]= prices[n-1];
    //            for( int i=n-2;i>=0;i--){
    //                   aux[i]= max(aux[i+1],prices[i]);
    //            }
    //             int maxi= INT_MIN;
    //             for( int i=0;i<n;i++){
    //                  maxi= max( maxi,aux[i]-prices[i]);
    //             }
    //              return maxi;
    //     }

    // //Time Complexity O(N)  and Space Complexity O(1)
    int maxProfit(vector<int> &prices)
    {
        int n = prices.size();
        int minisofar = prices[0];
        int max_profit = 0;

        for (int i = 0; i < n; i++)
        {
            if (prices[i] < minisofar)
            {
                minisofar = prices[i];
            }
            int diff = prices[i] - minisofar;
            max_profit = max(max_profit, diff);
        }
        return max_profit;
    }
};
int main()
{
    // code hear

    return 0;
}