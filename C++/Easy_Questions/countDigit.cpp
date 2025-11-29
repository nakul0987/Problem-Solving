#include <iostream>
using namespace std;

int countDigit(int n){
    int count=0;

    if(n==0) return 1;

    n=abs(n);
    while(n>0){
        count++;
        n/=10;
    }
    return count;
}

int main(){

    int a=76543;
    cout<<countDigit(a)<<endl;

    return 0;
}
