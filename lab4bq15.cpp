#include <iostream>
using namespace std;

int m=1, maxm, n=0;
int a[5];

int here(){
if (m<=4){
if (maxm<=a[m])
maxm=a[m];
m++;
display();
}
else
return maxm;
}

int main() {
cout << "Enter the numbers in the (5 memembered one dimensional) array conseccutively: ";
while (n<=4){
cin >> a[n];
n++;
}
maxm=a[0];
cout << "the maximum is: " << here();
return 0;
}
