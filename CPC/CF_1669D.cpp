#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    for(int tt=0; tt<t;++tt){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int r=0;
        int b =0;
        int w=0;
        int res = 0;
        bool allw = true;
        for(int i=0;i<n;++i){
            if(s[i]!='W'){
                allw=false;
                break;
            }
        }
        if (n==1){
            cout<<"NO"<<endl;
        }
        else if(n==2){
            if(s[0]=='W'){
                cout<<"NO"<<endl;
            }
            else if(s[1]=='W'){
                cout<<"NO"<<endl;
            }
            else{
                cout<<"YES"<<endl;
            }
        }
        else if(allw){
            cout<<"YES"<<endl;
        }
        else{
            for(int i=0;i<n;i++){
                if(s[i]=='W' && i!=0){
                    if((r==0 || b ==0) && w!=1){
                        cout<<"NO"<<endl;
                        res =1;
                        break;
                    }
                    r=0;
                    b=0;
                    w=1;
                }
                else if(s[i]=='R'){
                    r=1;
                    w=0;
                }
                else{
                    b=1;
                    w=0;
                }
            }
            if(res==0){
                cout<<"YES"<<endl;
            }
        }
    }
    return 0;
}