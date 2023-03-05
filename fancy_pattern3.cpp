#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        int start_index=2;
        int num=1;
        for(int j=1;j<=2*i-1;j++){
            if(j>=2 && j<2*i-1){
                cout<<num<<" ";
                if(j<=i-1){
                    num=num+1;
                }
                else{
                    num=num-1;
                }
            }
            else{
                cout<<"* ";
            }
        }
        cout<<endl;
    }
    for(int i=n-1;i>=1;i--){
        int start_index=2;
        int num=1;
        for(int j=1;j<=2*i-1;j++){
            if(j>=2 && j<2*i-1){
                cout<<num<<" ";
                if(j<=i-1){
                    num=num+1;
                }
                else{
                    num=num-1;
                }
            }
            else{
                cout<<"* ";
            }
        }
        cout<<endl;
    }
}