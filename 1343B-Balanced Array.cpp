#include<iostream>
using namespace std;
int main(){
    int t,n,a,i,j,k;
    cin>>t;
    for(i=1;i<=t;i++){
        cin>>n;
        a=n/2;
        if(a%2!=0){
            cout<<"NO"<<endl;
        }else{
            cout<<"YES"<<endl;
            for(j=2;j<=n;j=j+2){
                cout<<j<<" ";
            }
            for(k=1;k<=n+1;k=k+2){
                if(k!=a+1){
                    cout<<k<<" ";
                }
            }
            cout<<endl;
        }
    }
}
