#include <iostream>
using namespace std;
void selectionsort(int arr[],int n)
{
    for(int i = 0; i< n-1 ; i++)
    { int minindex = i;
        for(int j = i +1;j<n;j++)
        {
            if(arr[j]<arr[minindex])
              minindex = j;
        }
      int temp = arr[minindex];
        arr[minindex] = arr[i];
        arr[i] = temp;
    }
}
int main()
{
    int arr[5]={5,2,1,4,3};
    selectionsort(arr,5);
    for(int i =0;i<5;i++)
    cout<<arr[i]<<" ";

    cout<<endl;

    return 0;
}