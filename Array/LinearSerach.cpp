#include<bits/stdc++.h>
using namespace std;

int search(int arr[],int key){
	// int getArrayLength = sizeof(arr)/sizeof(int);
	// cout<<getArrayLength<<endl;
	for(int i=0;i<5;i++){
		if(arr[i]==key){
			return i;
		}
	}
	return -1;
}
int main(){
int arr[5]={1,5,6,3,9};
int key=6;

int ans=search(arr,key);

if(ans==-1){
	cout<<"Element is not found"<<endl;
}else{
	cout<<"Element found at index "<<ans<<endl;
}
return 0;
}