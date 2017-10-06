#include<iostream>
 
using namespace std;
 
int fibonacci(int n)
{
    if((n==1)||(n==0))
    {
        return(n);
    }
    else
    {
        return(fibonacci(n-1)+fibonacci(n-2));
    }
}
 
int main()
{
    int n,i=0;
    cout<<"Which term of the Fibonacci Series ?: ";
    cin>>n;
    cout<<"\nnth term of the sequence is\n";
    cout << fibonacci(n)<<endl;
 
    return 0;
}
