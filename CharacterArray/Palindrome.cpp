#include<bits/stdc++.h>
using namespace std;

bool checkPalindrome(string str){
	int low=0;
	int high=str.size()-1;
	while(low<=high){
		if(str[low]!=str[high]){
			return false;
		}
		low++;
		high--;
	}
	return true;
}
int main(){
string str="sachin";
if(checkPalindrome(str)){
	cout<<"Plaindrome"<<endl;
}else{
	cout<<"Not a Palindrome"<<endl;
}
return 0;
}