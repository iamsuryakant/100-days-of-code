#include<bits/stdc++.h>
#include<stack>
using namespace std;

const int MAX = 100;

int Gold(int gold[][MAX], int m, int n) {
    if (gold[m][n] == 0){
      return 0;
    }
    int res = 0; //intialize the result with zero.
    int temp = gold[m][n];
    gold[m][n] = 0;
    if (m > 0)
      res = max(res, temp + Gold(gold, m - 1, n));
    if (n > 0)
      res = max(res, temp + Gold(gold, m, n - 1));
    if (m < m - 1)
      res = max(res, temp + Gold(gold, m + 1, n));
    if (n < n - 1)
      res = max(res, temp + Gold(gold, m, n + 1));
    gold[m][n] = temp;
    return res;
  }
  int getMaximumGold(int gold[][MAX],int m , int n) {
    int result = 0;
    for (int i = 0; i < m; i++)
      for (int j = 0; j < n; j++)
        result = max(result, Gold(gold, i, j));
    return result;
}
// Driver Code
int main()
{
	int gold[MAX][MAX]= { {0, 6, 0},
		{5, 7, 8},
		{0, 9, 0}

	};
	int m = 3, n = 3;
	cout << getMaximumGold(gold, m, n);
	return 0;
}

