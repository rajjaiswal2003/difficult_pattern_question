#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        int start_index=9-i+1;
        int num=i;
        int count_num=num;
        for(int j=1;j<=17;j++){
            if(j==start_index && count_num>0){
                cout<<num<<" ";
                start_index=start_index+2;
                count_num--;
            }
            else{
                cout<<"* ";
            }
        }
        cout<<endl;
    }
}