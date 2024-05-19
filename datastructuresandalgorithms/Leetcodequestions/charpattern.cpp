#include <iostream>
#include <fstream>
using namespace std;

int main() {
    
    ofstream fout("files.txt");
    if(!fout)
    {
        cout<<"Error"<<endl;
        return 1;
    }
    int i,j;
    char ch=97;
    for(int i=1;i<=5;i++)
    {  
        for(int j=1;j<=5;j++)
        {
        if(j<=i)
        fout<<ch;
        else
        fout<<" ";
        }
        ch++;
        fout<<endl;
    }
    fout.close();

    ifstream fin("lines.txt");
    if (!fin) {
        cout << "Error: Unable to open file.\n";
        return 1;
    }

    
    string line;
    while (getline(fin, line)) {
        cout << line << endl;
    }

    fin.close();

    return 0;
}
