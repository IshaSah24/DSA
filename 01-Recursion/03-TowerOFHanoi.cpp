#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int towerOfHanoi(int n, int from, int to, int aux)
    {
        if (n == 1)
        {
            return 1;
        }

        int count = towerOfHanoi(n - 1, from, aux, to);
        count += 1;
        count += towerOfHanoi(n - 1, aux, to, from);

        return count;
    }
};

int main()
{
    Solution obj;
    int n = 3;
    cout << obj.towerOfHanoi(n, 1, 3, 2) << endl;
    return 0;
}