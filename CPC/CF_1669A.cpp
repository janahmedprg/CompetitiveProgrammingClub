#include <bits/stdc++.h>

using namespace std;


int main(){
    int t;
    cin>>t;
    for(int i=0; i<t;++i){
        int r;
        cin>>r;
        if(r<=1399){
            cout<<"Division 4"<<"\n";
        }
        else if(r<=1599){
            cout<<"Division 3"<<"\n";
        }
        else if(r<=1899){
            cout<<"Division 2"<<"\n";
        }
        else{
            cout<<"Division 1"<<"\n";
        }
    }
    return 0;
}