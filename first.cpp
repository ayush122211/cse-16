#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter no=";
    cin>>n;
    bool check = true;
    for (int i = 2;i*i<n;i++){
        if(n==2){
            break;
        }
        if(n%i==0 || ){
            check = false;
            break;
        }
    }
    if (check){
        cout<<"prime number";
    }
    else{
        cout<<"composite number";
    }   
}