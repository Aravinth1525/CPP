//Move all the negative elements to one side of the array

#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"\nEnter size of array - ";
    cin>>n;
    int a[n];
    cout<<"\nEnter array elements - ";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
     int b=-1;
     for(int j=0;j<n;j++){
        if(a[j]<0){
            b++;
            swap(a[b],a[j]);
        }
     }
cout<<"\nSorted Array -> ";
     for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
     }
     cout<<"\n\n";
}