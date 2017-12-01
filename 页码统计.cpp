/*
牛牛新买了一本算法书，算法书一共有n页，页码从1到n。
牛牛于是想了一个算法题目：在这本算法书页码中0~9每个数字分别出现了多少次？
*/
#include<iostream>
#include<vector>
using namespace std;
int main(){
	vector<int> res(10, 0);
	int n;
	cin >> n;
	for (int i = 0; i < 10; i++){
		int tmp = n;
		for (int k = 10; k <= tmp*10; k *= 10){
			if (i != 0){
				if ((tmp%k) / (k / 10) > i){
					res[i] += (tmp / k + 1)*(k / 10);
				}
				else if ((tmp%k) / (k / 10) == i){
					res[i] += (tmp / k)*(k / 10) + tmp % (k / 10) + 1;
				}
				else{
					res[i] += (tmp / k)*(k / 10);
				}
			}
			else{
				if ((tmp%k) / (k / 10) ==i){
					res[i] += (tmp / k - 1)*(k / 10) + tmp % (k / 10) + 1;
				}
				else{
					res[i] += (tmp / k)*(k / 10);
				}
			}
		}
	}
	for (int i = 0; i < 10; i++)
		cout << res[i] << " ";
	cout << endl;
	system("pause");
	return 0;
}