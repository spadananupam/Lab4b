#include <iostream>
using namespace std;

int a, b, c;

int hcf(int d){
if (a%d!=0 || b%d!=0){
d--;
hcf(d);
}
else
return d;

}

int main() {
cout << "HCF of two numbers:\n\n Enter two numbers consecutively:\n";
cin >> a >> b;
if (a<=b)
c=a;
else
c=b;
cout << "The required HCF is: " << hcf(c);

return 0;
}
