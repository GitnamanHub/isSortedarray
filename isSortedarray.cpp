#include<iostream>
using namespace std;

bool sorted(int arr[], int length)
{
    if(length==1)
    return true;

    if(*arr<*(arr+1))
    {
        return sorted(arr+1,length-1);
    }

    else
    return false;

}
int main()
{
    int arr[]={2};
    int length=sizeof(arr)/sizeof(arr[0]);
    if(sorted(arr,length))
    cout<<"ARRAY is sorted";
    else
    cout<<"Array is not sorted";
}