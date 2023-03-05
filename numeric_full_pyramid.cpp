#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    
    for(int i=1;i<=n;i++){
        for(int k=1;k<n-i+1;k++){
            cout<<"  ";
        }
        int num=i;
        for(int j=1;j<=i;j++){
            cout<<num<<" ";
            num=num+1;
        }
        int start_index=2*i-2;
        for(int j=1;j<i;j++){
                cout<<start_index<<" ";
                start_index=start_index-1;
        }
        cout<<endl;
    }
}