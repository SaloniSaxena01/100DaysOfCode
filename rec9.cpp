#include<iostream> //5 
using namespace std;
int lastocc( int arr[],int n,int i,int key)
{

    if(i==n)
    {
        return -1;
    }
    int rest= lastocc(arr,n,i+1,key);
    if(rest!= -1)
    {
        return rest;
    }
    if(arr[i]==key)
    {
        return i;
    }
    return -1;
    
    
}
int main()
{
    
    int arr[]={1,2,3,4,2,3,4};

    cout<<lastocc(arr,7,0,2);
    
    return 0;
}
