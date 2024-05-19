#include <iostream>
using namespace std;
int pairsum(int arr[], int n,int s)
{
    int ans;
    for (int i=0;i<n;i++)
    {
        for(int j=i+1;i<n;i++)
        {
            if (arr[i]+arr[j]==s)
            {
                int temp;
                temp = (min(arr[i],arr[j]));  //should have a min and max function too
                temp= (max(arr[i],arr[j]));
                ans= temp;
            }
        }
    }
    return ans;
}
int main()
{
    int arr[100],n,s;
    cout<<"Enter the size of array:";
    cin>>n;

    cout<<"enter the elemnts:";
    for (int i=0;i<n;i++)
    cin>>arr[i];

    cout<<"Enter the value of the no. you want to check pair for:";
    cin>>s;

    int ans= pairsum(arr,n,s);
    cout<<"The pairs are:"<<ans<<endl;

    return 0;


}