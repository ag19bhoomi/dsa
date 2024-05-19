#include <iostream>
using namespace std;
int firstOcc (int arr[], int n , int key)
{
    int s= 0, e= n-1;
    int mid = s + (e-s)/2;
    int ans = 0;

    while (s<=e){
        if (arr[mid] == key)
        {
            ans= mid;
            e = mid -1;
        }
        else if(key>arr[mid])
        s = mid +1;
        else
        e= mid-1;

        mid = s+ (e-s)/2;
    }
    return ans;
}
int lastOcc (int arr[], int n, int key)
{
    int s= 0, e= n-1;
    int mid = s + (e-s)/2;
    int ans = 0;

    while (s<=e){
        if (arr[mid]==key)
        {
            ans= mid;
            s = mid + 1;
        }
        else if(key>arr[mid])
        s = mid +1;
        else
        e= mid-1;

        mid = s+ (e-s)/2;
    }
    return ans;
}
int main()
{
    int even[6]={1,2,3,3,5,6};

    cout<<"First occurence of 3: "<<firstOcc(even,6,3)<<endl;
    cout<<"last occurence of 3: "<<lastOcc(even,6,3)<<endl;

}