#include<iostream> //5= 5 4 3 2 1
using namespace std;
int fib(int n)
{
    if(n==0)
    {
        return 0;
    }
    if(n==1)
    {
        return 1;
    }
    int term = fib(n-1)+fib(n-2);
    return term;
}
int main()
{
    cout<<"enter n ";
    int n;
    cin>>n;

    cout<<fib(n);
    
    return 0;
}
