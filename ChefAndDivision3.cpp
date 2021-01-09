#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int testCases;
	int*arr=nullptr;
	cin>>testCases;
	for (int i=0;i<testCases;i++)
	{
	    int n=0,k=0,d=0;
	    cin>>n>>k>>d;
	     arr=new int[n];
	     int sum=0;
	    for(int j=0;j<n;j++)
	    {
	        cin>>arr[j];
	        sum+=arr[j];
	    }
	    if(k>sum)
	    {
	        cout<<0<<endl;
	    }
	    else
	    {
	        int val=sum/k;
	        if(d>=val)
	        cout<<val<<endl;
	        else
	        cout<<d<<endl;
	    }
	    
	    
	    
	}
	return 0;
}
