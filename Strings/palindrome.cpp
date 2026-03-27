#include <iostream>
using namespace std;
 bool isPalindrome(string st);
int main(){
    string str;
    cout<<"Enter a string:"<<endl;
    getline(cin,str);
    if(isPalindrome(str)==1){
        cout<<"The string is a palindrome."<<endl;
    }else{
        cout<<"The string is not a palindrome."<<endl;
    }   
}
bool isPalindrome(string s){
int left =0;
    int right =s.length()-1;
    while(left<right){
        if(s[left]==s[right]){
            left++;
            right--;

        }else{
            return false;
        }
    }
    return true;
}