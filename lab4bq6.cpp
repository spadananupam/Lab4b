#include <iostream>
using namespace std;
int reverse_num (int number, int m) ;
int main()
{
	int number;
	int m=0;
	cout << "Enter number to reverse :";
	cin >> number;
	cout << reverse_num(number,0) << endl;
	return 0;
}
int reverse_num(int number,int m)
{
	if(number==0)
	return m; 
	m*=10;
	m+=number%10;
	return reverse_num(number/10,m);
}
