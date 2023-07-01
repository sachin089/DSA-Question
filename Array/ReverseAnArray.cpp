#include<bits/stdc++.h>
using namespace std;

void reverseArray(int arr[],int n){
	int firstPointer=0;
	int lenStr=n;
	int secondPointer=lenStr-1;
	while(firstPointer<=secondPointer){
		swap(arr[firstPointer],arr[secondPointer]);
		firstPointer++;
		secondPointer--;
	}
}

int main(){
	int arr[5]={1,2,3,4,5};
	reverseArray(arr,5);
	for(int i=0;i<5;i++){
		cout<<arr[i]<<" ";
	}

return 0;
}

