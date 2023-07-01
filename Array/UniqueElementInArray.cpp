#include<bits/stdc++.h>
using namespace std;

int uniqueElement(vector<int> &arr){
	int arraySize=arr.size();
	int ans=0;
	for(int i=0;i<arraySize;i++){
		cout<<"Element is "<<arr[i]<<" ";
		ans=ans^arr[i];
		cout<<"Ans is "<<ans<<" ";
		cout<<endl;
	}
	return ans;
}
int main(){
	vector<int>arr={2,3,2,4,4};
	int ans=uniqueElement(arr);
	cout<<"Unique Element in array is "<<ans<<endl;

return 0;
}