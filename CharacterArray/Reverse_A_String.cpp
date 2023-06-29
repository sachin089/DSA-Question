#include<bits/stdc++.h>
using namespace std;

void reverseString(string &str){
    int low=0;
    int high=str.length()-1;
    while(low<=high){
        swap(str[low],str[high]);
        low++;
        high--;
    }
}
int main(){
    string str;
    cout<<"Enter the String"<<endl;
    getline(cin,str);
    reverseString(str);
    cout<<"Reverse String is "<<endl;
    for(int i=0; i<str.length(); i++){
      cout<<str[i]<<" ";
    }

return 0;
}