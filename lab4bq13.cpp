#include <iostream>
using namespace std;

int m=0;

int display(int a[5]){
if (m<=4){
cout << a[m] << " ";
m++;
display(a);
}
}
int main() {
int n=0;
int a[5];
cout << "Enter the numbers in the (5 memembered one dimensional) array conseccutively: ";
while (n<=4){
cin >> a[n];
n++;
}
display(a);
return 0;
}
