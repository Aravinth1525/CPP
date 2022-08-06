//Find Max and Min element in array using minimum number of comparisions

// Time Complexity - O(nlogn)
#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"\nEnter size of array - ";
    cin>>a;
    int b[a];
        cout<<"\nEnter array elements - ";

    for(int i=0;i<a;i++)
    {
        cin>>b[i];
    }

    sort(b,b+a);
    cout<<"\nMIN - "<<b[0]<<"\n";
    cout<<"\nMAX - "<<b[a-1]<<"\n\n";

}

