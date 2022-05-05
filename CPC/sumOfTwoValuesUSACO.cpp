#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    int x;
    cin>>x;
    map<int,int> m;
    int resA=-1;
    int resB=-1;
    for(int i=0;i<n;++i){
        int a;
        cin>>a;
        if(m.count(x-a)==1){
            resA=m[x-a]+1;
            resB=i+1;
            break;
        }
        m[a]=i;
    }
    if(resA!=-1){
        cout<<resA<<" "<<resB<<"\n";
    }
    else{
        cout<<"IMPOSSIBLE"<<"\n";
    }
    return 0;
}