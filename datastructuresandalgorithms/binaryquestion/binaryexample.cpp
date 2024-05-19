#include <iostream>
using namespace std;
int binarysearch(int arr[],int size,int key)
{
    int start=0;
    int end = size - 1;

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
int main()
{
    int even[6]={2,4,6,8,10,12};
    int odd[5]={1,3,5,7,9,};

    int evenindex = binarysearch(even,6,12);
    int oddindex = binarysearch(odd,5,7);

    cout<<"The index of 12 is "<<evenindex<<endl;
    cout<<"The index of 7 is "<<oddindex<<endl;
  return 0;
}