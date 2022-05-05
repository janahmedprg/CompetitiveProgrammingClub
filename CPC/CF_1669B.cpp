#include <bits/stdc++.h>

using namespace std;


int main(){
    int t;
    cin>>t;
    for(int tt=0; tt<t;++tt){
        unordered_map<int, int> m;
        int res=0;
        int n;
        cin >>n;
        for(int i=0;i<n;++i){
            int r;
            cin>>r;
            if (m.find(r) == m.end()){
                m[r]=1;
            }
            else{
                m[r]+=1;
            }
        }
        for (auto i : m){
            if(i.second>=3){
                cout<<i.first<<"\n";
                res = 1;
                break;
            }
        }
        if(res==0){
            cout<<-1<<"\n";
        }
    }
    return 0;
}