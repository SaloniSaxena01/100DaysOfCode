#include<iostream>
using namespace std;
int power(int n, int p)
{
    if(p==0)
    {
        return 1;
    }
    int prev = power(n, p-1);
    return n*prev;
}
int main()
{
    cout<<"enter a no";
    int n;
    cin>>n;

    cout<<power(n);
    
    return 0;
}
