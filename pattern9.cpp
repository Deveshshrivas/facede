#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i = 1;
    while (i <=n){
        int j =1;
        int t =0;
        
        while(j <=n){
            
            char ch = 'A'+t;

            cout<<ch << ' ';
            t++ ;
           
            j= j+1;
        }
        cout<<endl;
        i = i+1;
    }
}