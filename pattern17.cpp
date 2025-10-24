#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i =1;
    while(i <=n){
        int sp = i-1;
        while(sp){
            cout<<" ";
            sp = sp-1;
        }
        int j = n-i+1;
        while(j){
            cout<<"*";
            j= j-1;
        }
        cout<<endl;
        i = i+1;
    }
}