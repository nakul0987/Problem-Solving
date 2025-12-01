#include <iostream>
using namespace std;

int main(){

    string st="rajendra";
    int vowel=0;
    int consonent=0;

    for(int i=0;i<st.length();i++){
        if(st[i]=='a' || st[i]=='e' || st[i]=='i' || st[i]=='o' || st[i]=='u'){
            vowel++;
        } else{
            consonent++;
        }
    }

    cout<<"Vowel: "<<vowel<<endl;
    cout<<"Consonant: "<<consonent<<endl;

    return 0;
}
