#include <iostream>
using namespace std;
int sum(int n1, int n2);
int main(){
	int n,k=0;
	cout <<"Please enter the natural number upto which you want the sum\n";
	cin >>n;
	cout << "The sum upto "<<n<<" is "<<sum(n,k)-(n+1)<<endl;
	return 0;
}
int sum(int n, int k){
	if (k<=n){return (k+(sum(n,k+1)));}
	
}


		

