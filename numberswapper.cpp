#include <iostream>
using namespace std;
void swapper(int arr[],int n){
    for(int i=0;i,i<=n;i+=2){
        if(i+1<n){
            swap(arr[i],arr[i+1]);
        }
    }
}
    
void printer(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i];
    }
}

    

int main(){
    int arr[6]={6,7,8,9,6,5};
    int size=7;
    swapper(arr,size);
    printer(arr,7);

}