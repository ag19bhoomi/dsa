#include <iostream>
using namespace std;
class solution
{ 
    public:
   long long int binarysearch(int n)
    { 
        int s = 0;
        int e = n;
       long long int mid = s + (e-s)/2;
       long long int ans = -1;

        while (s<=e)
        {
           long long int square = mid*mid;

            if(square == n)
            {
                return mid;
            }
            else if (square < n)
            {
                ans = mid;
                s = mid + 1;
            }
            else 
            {
                ans = mid;
                e = mid -1;
            }
            mid =  s + (e-s)/2;
        }
        return ans;
    }
    int mysqrt(int x)
    {
        return binarysearch(x);
    }
};
int main()
{
    solution s;
    int x = s.mysqrt(25);
    cout<<"square root : "<<x<<endl;

    return 0; 
}