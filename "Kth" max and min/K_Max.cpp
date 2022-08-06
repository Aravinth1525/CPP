#include<iostream>
using namespace std;
int main()
{
    int a;
    cout<<"\nEnter size of array - ";
    cin>>a;
    int b[a];
cout<<"\nEnter array elements - ";
    for(int i=0;i<a;i++)
    {
        cin>>b[i];
    }
    int k;
    cout<<"\nEnter Kth index - ";
    cin>>k;
    

    sort(b,b+a);
    cout<<"\nSorted array - ";
    for(int i=0;i<a;i++){
        cout<<b[i]<<" ";
    }
    cout<<"\n\nKth element - "<<b[k-1]<<"\n\n";

}