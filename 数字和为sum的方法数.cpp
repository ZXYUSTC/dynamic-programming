#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
	int res = 0;
	vector<int> A = { 5, 5, 10, 2, 3 };
	int sum = 15;
	int *dp = new int[sum + 1]();
	dp[0] = 1;
	for (int i = 0; i < 5; i++){
		for (int k = sum; k > 0; k--){
			if (k >= A[i]){
				dp[k] += dp[k - A[i]];
			}
		}
	}
	cout << dp[15] << endl;
	system("pause");
	return 0;
}
