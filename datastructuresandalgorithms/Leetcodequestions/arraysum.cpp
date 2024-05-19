#include <iostream>
#include <vector>
using namespace std;
vector <int>reverse(vector<int> v)
{
    int s =0;
    int e =v.size()-1;
    while(s<=e)
    {
        swap(v[s++],v[e--]);
    }
    return v;
}
vector<int> sum(vector<int> v,vector<int> w)
{
    int n = v.size();
    int m = w.size();
    vector <int> ans;
    int i = n-1,j=m-1;
    int carry=0;

    while(i>=0&&j>=0)
    {
        int val1=v[i];
        int val2 = w[j];

        int sum = val1+val2+carry;

        carry=sum/10;
        sum=sum%10;
        ans.push_back(sum);
        i--;
        j--;
    }
    //first case
    while(i>=0)
    {
       
        int sum = v[i]+carry;

        carry=sum/10;
        sum=sum%10;
        ans.push_back(sum);
        i--;
    }

    // second case
    while(j>=0)
    {
        
        int sum = w[j]+carry;

        carry=sum/10;
        sum=sum%10;
        ans.push_back(sum);
        j--;
    }
    while(carry!=0)
    {
        int sum = carry;

        carry=sum/10;
        sum=sum%10;
        ans.push_back(sum);
    }
    return reverse(ans);
}

int main()
{
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);

    vector <int> w;
    w.push_back(1);
    w.push_back(5);
    w.push_back(3);
    w.push_back(4);
    w.push_back(5);

    vector<int> ans= sum(v,w);

    cout << "The sum is: ";
    for (int i = 0; i < ans.size(); i++) {
        cout << ans[i];
    }
    cout << endl;

    return 0;
}