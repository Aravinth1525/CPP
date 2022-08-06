//Find Max and Min element in array using minimum number of comparisions

// Time Complexity - O(n)
#include<iostream>
using namespace std;
int main(){
    int a,max,min;
    cout<<"\nEnter size of array - ";
    cin>>a;
    int b[a];
        cout<<"\nEnter array elements - ";

    for(int i=0;i<a;i++)
    {
        cin>>b[i];
    }

    if(a==1){
        max=b[0];
        min=b[0];
    }
    else{
        if(b[0]<b[1]){
        max=b[1];
        min=b[0];
        }
        else{
            max=b[0];
        min=b[1];

        }
        for(int i=2;i<a;i++)
        {
            if(b[i]>max)
            {
                max=b[i];
            }
            if(b[i]<min){
                min=b[i];
            }
        }
    }

    cout<<"\nMIN - "<<min<<"\n";
    cout<<"\nMAX - "<<max<<"\n\n";

}