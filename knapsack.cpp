#include<bits/stdc++.h>

using namespace std;


int KnapSack(int wt[], int val[], int W, int n)
{
    if(W==0 || n == 0)
    {
        return 0;
    }

    if(wt[n-1] <= W)
    {
        return max(val[n-1] + KnapSack(wt , val , W - wt[n-1] , n-1) ,KnapSack(wt , val , W , n-1));
    }
    else if(wt[n-1] > W)
    {
        return KnapSack(wt, val, W, n - 1);
    }
    return 0;
}


int main()
{

    int wt[] = {1,3,4,5};
    int val[] = {1,4,5,7};
    int W = 7;
    int n = sizeof(wt)/sizeof(int);
    cout << KnapSack(wt,val,W,n);
    return 0;
}
