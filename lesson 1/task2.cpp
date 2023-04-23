#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int knapSack(int W, int wt[], int val[], int n)
{
    int K[n + 1][W + 1];

    for (int i = 0; i < n + 1; i++) {
        for (int j = 0; j < W + 1; j++) {
            if (i == 0 || j == 0) {
                K[i][j] = 0;
            } else if (wt[i - 1] <= j) {
                K[i][j] = max(K[i - 1][j], val[i - 1] + K[i - 1][j - wt[i - 1]]);
            } else if (wt[i - 1] > j) {
                K[i][j] = K[i - 1][j];
            }
        }
    }

    return K[n][W];
}

int main() {

    int profit[] = { 60, 100, 120 };
    int weight[] = { 10, 20, 30 };
    int W = 50;
    int n = sizeof(profit) / sizeof(profit[0]);

    cout << knapSack(W, weight, profit, sizeof(profit) / sizeof(int));

    return 0;
}