#include <iostream>
#include <vector>
using namespace std;
char getmaxocccharacter(string s)
{
    int arr[26];

    //create an array of count of characters
    for (int i=0; i<s.length(); i++)
    {
        char ch = s[i];
        //lowercase
        int number = 0;
        number = ch - 'a';
        arr[number]++;
    }

    //find max number
    int max = 0, ans =0;
    for (int i=0; i<26; i++)
    {
        if (max < arr[i])
        {
            ans =i;
            max =arr[i];
        }
    }

    return 'a'+ans;
}
int main()
{
    string s;
    cout<<"Enter a string: "<<endl;
    cin >> s;
    cout << getmaxocccharacter(s)<<endl;

    return 0;
}
