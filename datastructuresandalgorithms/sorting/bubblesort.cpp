#include <iostream>
using namespace std;
void bubblesort(int arr[],int n)
{
   for(int i =0;i<n-1;i++)
   { //for round 1 to n-1
   bool swapped = false;       //optimisation
       for (int j=0;j<n-i-1;j++)
       { //process element till n-ith index
        if (arr[j]>arr[j+1])
        {
            int temp = arr[j];
            arr[j]= arr[j+1];
            arr[j+1]= temp;
            swapped = true;
        }
       }
       if (swapped == false)
       { //already sorted
          break;
       }
   }
}
int main()
{
    int arr[5]={4,5,7,2,8};
     bubblesort(arr,5);
    for(int i =0;i<5;i++)
    cout<<arr[i]<<" ";

    cout<<endl;

    return 0;
}
