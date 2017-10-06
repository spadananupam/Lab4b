#include <iostream>
using namespace std;
int reverse_num (int number, int m) ;
int main()
{
	int number;
	int num;	
	int m=0;
	cout << "Enter number to test :";
	cin >> number;
	num=number;
	if  (reverse_num(number,0)==num){
		cout << "The number is a palindrome\n";}
	else cout << "It is not a palindrome\n";
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
