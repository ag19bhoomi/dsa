#include <iostream>
using namespace std;
class solution
{ 
    int arr[100];
    int n;
    public: 
    void setdata()
    {
        cout<<"Enter the size of array: "<<endl;
        cin>>n;
        cout<<"Enter the elements: "<<endl;
        for(int i =0;i<n;i++)
        cin>>arr[i];
    }
    int peakindex()
    {
        int s = 0,e = n -1;

        int mid = s+ (e-s)/2;

        while(s<e)
        {
            if (arr[mid]<arr[mid+1])
            s= mid +1;
            else 
            e = mid;
            mid = s + (e-s)/2;
        }
        return s;
    }
};
int main()
{
    solution s1;
    s1.setdata();
    int ans = s1.peakindex();
    cout<<"Peak index is : "<<ans<<endl;

    return 0;

}