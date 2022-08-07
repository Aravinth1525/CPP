//Find the Union of the two Arrays
#include<iostream>
#include <unordered_map>
using namespace std;
int main()
{
    int t;
    cout<<"\nEnter number of test cases - ";
    cin>>t;
    
    while(t--)
    {
        int n,m;
            cout<<"\nEnter size of two arrays - ";

        cin>>n>>m;
        int a[n],b[m];
            cout<<"\nEnter first array elements - ";
unordered_map <int, int> map;
        for(int i=0;i<n;i++) 
        {
            cin>>a[i];
            map[a[i]]++;
            }
                cout<<"\nEnter second array elements - ";

        for(int i=0;i<m;i++) 
        {
            cin>>b[i];
            map[b[i]]++;
        }
cout<<"\nUnion - ";
       cout<<map.size()<<"\n";

    }
     
     cout<<"\n";
}