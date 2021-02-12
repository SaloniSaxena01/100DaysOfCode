#include<iostream> //5= 5 4 3 2 1
using namespace std;
int fact(int n)
{
    if(n==1)
    {
        return 1;
    }
    int prev = fact(n-1);
    return n*prev;
}
int main()
{
    cout<<"enter n ";
    int n;
    cin>>n;

    cout<<fact(n);
    
    return 0;
}
