#include<iostream>
#include<string>
#include<vector>
using namespace std;

vector<int> mult(vector<int> &a,int b)
{
    vector<int> c;
    int t=0;
    for(int i=0;i<a.size();i++)
    {   

    }

}

int main()
{
    string a;
    int b;
    cin>>a>>b;
    vector<int> A;
    for(int i=a.size()-1;i>=0;--i)  A.push_back(a[i]-'0');

    auto c=mult(A,b);
    
    for(int i= c.size()-1;i>=0;--i) printf("%d",c[i]);
    return 0;

}