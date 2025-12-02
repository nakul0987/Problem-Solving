#include <iostream>
#include <algorithm>
using namespace std;

int main(){

    string s1="kunal";
    string s2="lukae";

    if(s1.length()!=s2.length()){
        cout<<"Not Anagram\n";
    } else{
        sort(s1.begin(),s1.end());
        sort(s2.begin(),s2.end());

        if(s1==s2){
            cout<<"Anagram\n";
        } else{
            cout<<"Not Anagram\n";
        }
    }

    return 0;
}
