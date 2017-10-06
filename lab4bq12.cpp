#include <iostream>
using namespace std;

int a,b, c;

int lcm(int d){
if (d%a!=0 || d%b!=0){
d++;
lcm(d);
}
else
return d;

}

int main() {
cout << "LCM of two numbers:\n\n Enter two numbers consecutively:\n";
cin >> a >> b;
if (a>=b)
c=a;
else
c=b;

cout << "The required LCM is: " << lcm(c);

return 0;
}

