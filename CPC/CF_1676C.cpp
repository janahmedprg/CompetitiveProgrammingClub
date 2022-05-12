#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    for(int tt=0; tt<t;++tt){
        int n, m;
        cin>>n>>m;
        vector<int> v;
        vector<string> strs;
        for(int i=0;i<n;++i){
            string b;
            cin>>b;
            int diff =0;
            for(int ii=0;ii<strs.size();++ii){
                int diff =0;
                for(int j=0;j<m;++j){
                    diff+=abs(strs[ii][j]-b[j]);
                }
                v.push_back(diff);
            }
            strs.push_back(b);
        }  
        cout<<*min_element(v.begin(),v.end())<<"\n"; 
    }
    return 0;
}