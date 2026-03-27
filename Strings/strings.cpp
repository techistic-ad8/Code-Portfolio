#include <iostream>
using namespace std;
int getlength(char name[]){
    int count =0;
    for(int i=0;name[i]!='\0';i++){
        count ++;
        
    }
    return count;
}

void reverse(char name[]){
    int left=0;
    int right =getlength(name)-1;
    while(left<right){
        swap(name[left],name[right]);
        left ++;
        right --;
    }
}
int main() {
    char name[20];
    cout<<"Enter your name: "<<endl;
    cin>>name;
    cout<<"Your name is ";
    cout<<name<<endl;
    cout<<"Length of your name is "<<getlength(name)<<endl;
    cout<<"Your name in reverse is"<<endl;
    reverse(name);
    cout<<name<<endl;
    return 0;
}