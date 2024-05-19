#include <iostream>
using namespace std;
bool isPossible(int arr[],int n,int m,int mid)
{
    int studentcount=1;
    int pagesum =0;
     
    for (int i=0;i<n;i++)
    {
        if (pagesum + arr[i]<=mid)
        pagesum += arr[i];
        else
          {
            studentcount++;
            if (studentcount>m || arr[i]>mid)
            return false;
          
            pagesum+= arr[i];
          }
    }
    return true;
}
int allocate(int arr[],int n,int m)
{
    int s= 0;
    int e = 0,sum;

    for (int i =0;i<n;i++)
    sum += arr[i];

     e = sum;
    int ans= -1;
    int mid = s +(e-s)/2;

    while(s<=e)
    {
        if(isPossible(arr,n,m,mid))
        {
            ans=mid;
            e=mid-1;
        }
        else
        s=mid+1;

        mid = s+(e-s)/2;
    }
    return ans;
}
int main()
{
    int arr[4]={10,20,30,40};
    int ans= allocate(arr,4,2);

    cout<<"answer: "<<ans<<endl;
    return 0;
}