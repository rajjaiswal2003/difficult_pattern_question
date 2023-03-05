#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int k=1;k<n-i+1;k++){
            cout<<"  ";
        }
        int num=1;
        for(int j=1;j<=2*i-1;j++){
            if(i==1 ||i==n){
                if(j%2!=0){
                    cout<<num<<" ";
                    num=num+1;
                }
                else{
                    cout<<"  ";
                }
            }
            else{
                if(j==1){
                    cout<<'1'<<" ";
                }
                else if(j==2*i-1){
                    cout<<i<<" ";
                }
                else{
                    cout<<"  ";
                }
            }
        }
        cout<<endl;
    }
}