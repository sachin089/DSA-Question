#include <bits/stdc++.h>
using namespace std;
class Solution{
    public:
    void segregateElements(int arr[],int n)
    {
        int lowIndex=0;
        int highIndex=n;
        while(lowIndex<highIndex){
            if(arr[lowIndex]>=0){
                lowIndex++;
            }
            else if(arr[highIndex]<0){
                highIndex--;
            }
            else{
                swap(arr[lowIndex],arr[highIndex]);
                // lowIndex++;
                // highIndex--;
            }
        }
    }
};

int main() {
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++)
		cin>>a[i];
		Solution ob;
		ob.segregateElements(a,n);
		
        for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
		cout<<endl;
	}
}