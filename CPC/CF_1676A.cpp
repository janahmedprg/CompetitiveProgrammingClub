#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    for(int tt=0; tt<t;++tt){
        string x;
        cin>>x;
        int s=0;
        for(int i=0;i<3;++i){
            s+=x[i];
        }
        int s2=0;
        for(int i=3;i<6;++i){
            s2+=x[i];
        }
        if(s==s2){
            cout<<"YES"<<"\n";
        }
        else{
            cout<<"NO"<<"\n";
        }

    }
    return 0;
}