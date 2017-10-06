#include <iostream>
using namespace std;
int nat(int n1, int n2);
int main(){
	int k=1,res,n;
	cout << "Please enter the last number \n";
	cin >> n;
	res=nat(k,n);
	cout << res<<endl;
	return 0;}
int nat(int k, int n){
	if (k<=n){cout <<k;
		return k+1;}
	nat (k-1,n);
	}
