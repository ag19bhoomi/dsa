#include <iostream>
using namespace std;
void swapalternate(int arr[], int size)
{
    for (int i=0;i<size;i=i+2)
    {
        if (i+1<size)
        {
            swap(arr[i],arr[i+1]);
        }
    }
}
void printarray(int arr[],int size)
{
    cout<<"The array is: ";
    for (int i=0;i<size;i++)
    cout<<arr[i]<<" ";
}
int main()
{
    int even[8]={5,2,6,4,8,3,9,7};
    int odd[5]={5,6,4,2,3};

    swapalternate(even,8);
    swapalternate(odd,5);

    printarray(even,8);
    cout<<endl;
    printarray(odd,5);
    cout<<endl;

    return 0;
}