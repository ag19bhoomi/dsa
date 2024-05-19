#include <iostream>
#include <algorithm>
using namespace std;
bool isPossible(int stalls[],int n,int m,int mid)
{
    int cowcount=1;
    int lastpos = stalls[0];

    for (int i = 0; i<n;i++)
    {
        if (stalls[i]-lastpos>= mid)
        {
            cowcount++;
            if(cowcount == m)
            {
                return true;
            }
            lastpos = stalls[i];
        }
    }
    return false;
}


int agressivecows(int stalls[], int n,int m)
{
    int s = 0;        //only for sirted arrays
    int maxi = -1;
    
    for(int i = 0; i<n; i++){
        maxi = max(maxi,stalls[i]);
    }
    int e = maxi;
    int mid = s + (e-s)/2;
    int ans = -1;
    
    while(s<=e){
        if(isPossible(stalls,n,m,mid)){
            ans = mid;
           s = mid +1;
        }
        else{
            e = mid -1;
        }
        mid = s + (e-s)/2;
    }
    return ans;
}
int main()
{
    int stalls[5]={1,2,3,4,6};
    int ans=agressivecows(stalls,5,2);

    cout<<"Answer: "<<ans<<endl;

    return 0;
}

