#include <iostream>
using namespace std;

int main(){

    int arr[6]={3,65,98,23,41,65};
    int max=0;
    int min=99999;

    for(int i=0;i<6;i++){
        if(arr[i]>max){
            max=arr[i];
        }
        if(arr[i]<min){
            min=arr[i];
        }
    }
    cout<<"Max Element: "<<max<<endl;
    cout<<"Min Element: "<<min<<endl;

    return 0;
}
