
#include <iostream>
using namespace std;

int m=0, sum=0;

int display(int a[5]){
if (m<=4){
sum=sum+a[m];
m++;
display(a);
}
else
return sum;
}
int main() {
int n=0;
int a[5];
cout << "Enter the numbers in the (5 memembered one dimensional) array conseccutively: ";
while (n<=4){
cin >> a[n];
n++;
}
cout << "the sum is: " << display(a);
return 0;}

