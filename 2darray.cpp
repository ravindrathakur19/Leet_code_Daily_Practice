#include<iostream>
using namespace std;
int main(){
    int arr[3][5];
    arr[0][0]=5;
    arr[0][1]=6;
    arr[0][2]=4;
    arr[0][3]=5;
    
    cout<<arr[0][2];
}



// 2nd method Taking input from user

#include<iostream>
using namespace std;
int main(){
    int arr[3][5];
    cin>>arr[0][0]>>arr[0][1]>>arr[0][2];
    
    cout<<arr[0][2];
}


