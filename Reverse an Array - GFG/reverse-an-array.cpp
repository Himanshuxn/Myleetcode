#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int A[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>A[i];
	    }
	    int start=0;int end=n-1;
	    int temp;
	    while(start<end)
	    {
	      temp=A[start];
	      A[start]=A[end];
	      A[end]=temp;
	      start++;
	      end--;
	    }
	    for(int i=0;i<n;i++)
	    {
	        cout<<A[i]<<" ";
	    }
	    cout<<endl;
	}
	return 0;
}