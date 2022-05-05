#include <bits/stdc++.h>

using namespace std;


int main(){
    int t;
    cin>>t;
    for(int tt=0; tt<t;++tt){
        int n;
        cin>>n;
        if(n<3){
            cout<<"YES"<<endl;
            int foo;
            for(int j=0;j<n;j++){
                cin>>foo;
            }
        }
        else{
            int a,b;
            cin>>a;
            cin>>b;
            int res=0;
            for(int i=0;i<n-2;++i){
                int c;
                cin>>c;
                if(i%2==0){
                    if(a%2!=c%2 && res==0){
                        cout<<"NO"<<endl;
                        res = 1;
                    }
                }
                else{
                    if(b%2!=c%2 && res==0){
                        cout<<"NO"<<endl;
                        res =1;
                    }
                }
            }
            if (res==0){
                cout<<"YES"<<endl;
            }
        }
    }
    return 0;
}