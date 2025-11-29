#include <iostream>
using namespace std;

int main(){

    int arr[6]={12,45,87,97,11,21};
    int sum=0;
    for(int i=0;i<6;i++){
        sum+=arr[i];
    }

    cout<<"Sum of an array is "<<sum<<endl;

    return 0;
}
