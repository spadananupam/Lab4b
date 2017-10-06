#include <iostream>
using namespace std;
int printevenodd(int n1,int n2,int n3);
int main(){
	int test,ll,hl,res;
	cout <<"Please enter the lower limit\n";
	cin >>ll;
	cout <<"Please enter the higher limit\n";
	cin >>hl;
	test=ll;
	cout << "The numbers are :\n";
	printevenodd(ll,hl,test);
	return 0;
	
}
int printevenodd(int ll, int hl, int test){
	if (test <= hl){cout << test;
	       return printevenodd(ll ,hl,test+2);}

}

