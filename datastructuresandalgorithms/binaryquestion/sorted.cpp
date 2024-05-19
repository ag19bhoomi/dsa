#include <iostream>
using namespace std;
int pivot(int arr[],int n)
{
    int s=0;
    int e=n-1;
    int mid = s+(e-s)/2;

    while(s<e)
    {
        if (arr[mid]>=arr[0])
        s=mid+1;
        else 
        e=mid;

        mid = s+(e-s)/2;
    }
    return s;
}
int binarysearch(int arr[],int s,int e,int key)
{
    int start=s;
    int end = e;

    int  mid = start + (end-start)/2;  

    while (start<=end)
    {

        if (arr[mid]==key)
        {
            return mid;
        }

        //go to right part of array
        else if (key>arr[mid])
        {
            start= mid + 1;
        }

        // go to left part pf array
        else {
            end= mid - 1;
        }
        mid = start + (end-start)/2;
    }
    return -1;
}
int sorted(int arr[],int n,int key)
{
    int pi = pivot(arr,n);
    
    
        if (key>=arr[pi] && key <= arr[n-1])
        return  binarysearch(arr,pi,n-1,key);
        else 
        return binarysearch( arr, 0, pi - 1, key);

}
int main()
{
    int arr[5]={7,8,1,2,3};
    int s = sorted(arr,5,2);

    cout<<"Index: "<<s<<endl;

    return 0;
}