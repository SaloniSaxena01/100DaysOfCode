#include<iostream> //5= 5 4 3 2 1
using namespace std;
bool IsSorted(int arr[], int n)
{
      
    if(n==1)
    {
        return true;
    }
    bool Restarray = IsSorted(arr+1, n-1);
    return (arr[0]<arr[1] && Restarray);
}
int main()
{
    
    int arr[]={1,2,3,5,4};
    

    cout<<IsSorted(arr,5);
    
    return 0;
}
