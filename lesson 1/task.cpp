#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int knapSack(int W, int wt[], int val[], int n)
{
    if (W == 0 || n == 0) {
        return 0;
    }

    if (wt[n - 1] > W) {
        return knapSack(W, wt, val, n - 1);
    } else {
        return max(knapSack(W, wt, val, n - 1), val[n - 1] + knapSack(W - wt[n - 1], wt, val, n - 1));
    }

}

int main() {

    int profit[] = { 10, 15, 40 };
    int weight[] = { 1, 2, 3 };
    int W = 6;

    cout << knapSack(W, weight, profit, sizeof(profit) / sizeof(int));

    return 0;
}