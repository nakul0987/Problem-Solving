#include <iostream>
using namespace std;

int main(){

    int arr[9]={1,2,3,4,5,7,8,9,10};
    int n=10;
    int totalSum=(n*(n+1))/2;
    int arrSum=0;

    for(int i=1;i<10;i++){
        arrSum+=arr[i];
    }
    cout<<"Missing Number from array is "<<totalSum-arrSum<<endl;

    return 0;
}
