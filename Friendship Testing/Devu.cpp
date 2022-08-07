#include <iostream>
#include<algorithm>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n,count=0;
	    cin>>n;
	    int a[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>a[i];
	        
	    }
	    
	   sort(a,a+n);
	   for (int i = 0; i < n; i++){

      while (i < n - 1 && a[i] == a[i + 1]){
         i++;
      }
      count++;
	   }
	   cout<<endl;
	   cout<<count<<endl;
	    
	    
	}
	return 0;
}
