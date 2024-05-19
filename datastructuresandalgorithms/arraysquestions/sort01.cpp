#include<iostream>
using namespace std;
void printarray(int arr[],int n)
{
    for (int i=0;i<n;i++)
    cout<<arr[i];

    cout<<endl;
}

void sortone(int arr[],int n)
{
    int i=0,j=n-1;
    while(i<j)
    {
        while(arr[i] == 0 && i<j)
        {i++;}

        while(arr[j]==1 && i<j)
        {j--;}

        if(i<j)
        {
            int temp = arr[i];
            arr[i]  = arr[j];
            arr[j]= temp;
            i++;
            j--;
        }
    }
        
}

int main()
{
    int arr[6]={0,1,0,1,0,1};

    sortone(arr,6);
    printarray(arr,6);

    return 0;
    

}
