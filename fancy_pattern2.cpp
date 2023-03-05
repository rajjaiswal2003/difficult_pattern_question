#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int num=1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<num;
            num=num+1;
            if(j!=i){
               cout<<"*";
            }
        }
        cout<<endl;
    }
    int start=num-n;
    for(int i=1;i<=n;i++){
        int k=start;
        for(int j=1;j<=n-i+1;j++){
            cout<<k;
            k++;
            if(j!=n-i+1){
                cout<<"*";
            }
        }
        start=start-(n-i);
        cout<<endl;
    }
}