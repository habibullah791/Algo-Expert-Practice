#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int nonConstructibleChange(vector<int> coins)
{

    sort(coins.begin(), coins.end());
    int change = 0;

    for (int coin : coins)
    {
        if (coin > change + 1)
            return change + 1;

        change += coin;
    }

    return change + 1;
}

int main()
{
    vector<int> coins = {5, 7, 1, 1, 2, 3, 22};

    int result = nonConstructibleChange(coins);

    cout << "result :" << result;
}