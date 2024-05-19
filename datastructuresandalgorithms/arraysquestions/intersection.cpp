 #include <iostream>
 using namespace std;
 int findarrayintersection(int arr1[],int n,int arr2[],int m)
 {
     int ans,element;

    for (int i= 0; i<n; i++)
     element = arr1[i];

    for (int j=0; j<m; j++)
    {
        if (element == arr2[j])
         {  ans=element;
           arr2[j] = -2;
           break; 
         }
    }
    return ans;
/*
 MORE OPTIMIZED SOLN.
 (When array is already sorted in non-decreasing order)
   int i= 0,j=0;
   int ans;

   while(i<n && j<m)
   {
      if (arr1[i] == arr2[j])
      {
        ans=arr1[i];
        i++;
        j++;
      }
      else if (arr1[i]<arr2[j])
      {
        i++;
      }
      else 
      {
        j++;
      }
   } 
   return ans;
   */
}

 int main()
 {
    int arr1[100],arr2[100],n,m;
    cout<<"enter the size of 1st array: "<<endl;
    cin>>n;
    cout<<"enter the elements of 1st array"<<endl;
    for (int i=0;i<n;i++)
    cin>>arr1[i];

    cout<<"enter the size of 2nd array: "<<endl;
    cin>>m;
    cout<<"enter the elements of 2nd array"<<endl;
    for (int i=0;i<m;i++)
    cin>>arr2[i];

    int commonIntersection = findarrayintersection(arr1, n, arr2, m); 
    if (commonIntersection != -1) {
        cout << "The common intersection between them is: " << commonIntersection << endl;
    } else {
        cout << "No common intersection found." << endl;
    }

    return 0;


 }