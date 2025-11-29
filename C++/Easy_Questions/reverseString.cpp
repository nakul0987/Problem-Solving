#include <iostream>
using namespace std;

int main(){

    string st="nakul";
    string revSt="";

    for(int i=st.length()-1;i>=0;i--){
        revSt+=st[i];
    }
    cout<<revSt<<endl;

    return 0;
}
