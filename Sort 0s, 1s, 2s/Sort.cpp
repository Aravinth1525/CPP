//Sort an array consisting of 0,1,2 without using sorting algorithm
#include<iostream>
using namespace std;
int main(){
    int a,c0=0,c1=0,c2=0;
    cout<<"\nEnter size of array - ";
    cin>>a;
    int b[a],c[a];
        cout<<"\nEnter array elements - ";

    for(int i=0;i<a;i++)
    {
        cin>>b[i];
    }
    for(int i=0;i<a;i++){
        if(b[i]==0) c0++;
       else if(b[i]==1) c1++;
        else c2++;
    }
    int j=0;
    for(int i=0;i<c0;i++) b[j++]=0;
    for(int i=0;i<c1;i++) b[j++]=1;
    for(int i=0;i<c2;i++) b[j++]=2;

cout<<"\nSorted array - ";
for(int i=0;i<a;i++)
    {
        cout<<b[i]<<" ";
    }
    cout<<"\n\n";

}
