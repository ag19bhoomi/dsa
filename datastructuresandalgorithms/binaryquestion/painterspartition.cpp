#include <iostream>
using namespace std;

bool isPossibleSol(int boards[], int n, int m, int mid){
    int painter  = 1;
    int boardsPainted = 0;
    
    for(int i = 0; i<n; i++){
        if(boardsPainted + boards[i]<=mid){
            boardsPainted = boardsPainted + boards[i];
        }
        else{
            painter++;
            if(painter > m || boards[i] > mid){
                return false;
            }
            boardsPainted = boards[i];
        }
    }
    return true;
}


int findLargestMinDistance(int boards[], int n,int m)
{
    int s = 0;
    int sum = 0;
    
    for(int i = 0; i<n; i++){
        sum = sum + boards[i];
    }
    int e = sum;
    int mid = s + (e-s)/2;
    int ans = -1;
    
    while(s<=e){
        if(isPossibleSol(boards,n,m,mid)){
            ans = mid;
            e = mid - 1;
        }
        else{
            s = mid + 1;
        }
        mid = s + (e-s)/2;
    }
    return ans;
}
int main()
{
    int arr[4]={5,5,5,5};
    int ans=findLargestMinDistance(arr,4,2);
    cout<<"Answer: "<<ans<<endl;
    return 0;
}