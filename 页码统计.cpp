/*
ţţ������һ���㷨�飬�㷨��һ����nҳ��ҳ���1��n��
ţţ��������һ���㷨��Ŀ�����Ȿ�㷨��ҳ����0~9ÿ�����ֱַ�����˶��ٴΣ�
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