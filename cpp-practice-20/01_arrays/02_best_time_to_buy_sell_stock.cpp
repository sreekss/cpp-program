// Best Time to Buy and Sell Stock
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int maxProfit(const vector<int>& prices) {
    int lowestPrice = prices[0];
    int bestProfit = 0;

    for (int price : prices) {
        lowestPrice = min(lowestPrice, price);
        bestProfit = max(bestProfit, price - lowestPrice);
    }
    return bestProfit;
}

int main() {
    vector<int> prices = {7, 1, 5, 3, 6, 4};
    cout << maxProfit(prices) << '\n';
    return 0;
}
