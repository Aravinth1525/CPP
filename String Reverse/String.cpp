#include<iostream>
using namespace std;
int main()
{
    string s;
    cout<<"\nEnter String - ";
    cin>>s;
    int n=s.length();
    int start=0,end=n-1;
    while(start<end)
    {
        swap(s[start],s[end]);
        start++;
        end--;
    }
    cout<<"\nReversed String - "<<s<<endl<<endl;
}