#include <iostream>
using namespace std;

int isPalindrome(string & st){
    int left=0;
    int right=st.length()-1;

    while(left<right){
        if(st[left]!=st[right]){
            return 0;
        }
        left++;
        right--;
    }
    return 1;
}

int main(){

    string s="abba";

    if(isPalindrome(s)){
        cout<<"Palindrome\n";
    } else{
        cout<<"Not Palindrome\n";
    }

    return 0;
}
