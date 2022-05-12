#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    for(int tt=0; tt<t;++tt){
        int n;
        cin>>n;
        vector<int> v;
        for(int i=0;i<n;++i){
            int a;
            cin>>a;
            v.push_back(a);
        }
        sort(v.begin(),v.end());
        int minVal = v[0];
        int sum =0;
        for(int i=0;i<n;++i){
            sum += v[i]-minVal;
        }
        cout<<sum<<"\n";
    }
    return 0;
}