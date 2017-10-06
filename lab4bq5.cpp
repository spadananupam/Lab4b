#include <iostream>
using namespace std;
int printevenodd(int n1,int n2,int n3);
int main(){
	int test,ll,hl,res,sum=0;
	cout <<"Please enter the lower limit\n";
	cin >>ll;
	cout <<"Please enter the higher limit\n";
	cin >>hl;
	test=ll;
	cout << "The sum is :\n";
	cout << printevenodd(ll,hl,test);	
	return 0;
	
}
int printevenodd(int ll, int hl, int test){
	if (test <= hl){printevenodd(ll,hl,test+1)=printevenodd(ll,hl,test)+test;}	
	return printevenodd(ll,hl,test+1);}



