#include<iostream>
using namespace std;
int main(){
	int n;
	cin >> n;
	int *dp = new int[n + 1]();
	dp[1] = 3;
	dp[2] = 9;
	dp[3] = 21;
	for (int i = 4; i <= n; i++){
		dp[i] = 2 * dp[i - 1] + dp[i - 2];
	}
	cout << dp[n] << endl;
	system("pause");
	return 0;
}