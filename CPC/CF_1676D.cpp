#include <bits/stdc++.h>

using namespace std;

long long sumDiag(vector<vector<int>> b, int r, int c, int maxR, int maxC){
    long long s=0;
    int iteR=r+1;
    int iteC=c+1;
    while(iteR<maxR && iteC<maxC){
        s+=b[iteR][iteC];
        iteR++;
        iteC++;
    }
    iteR=r-1;
    iteC=c-1;
    while(iteR>=0 && iteC>=0){
        s+=b[iteR][iteC];
        iteR--;
        iteC--;
    }
    iteR=r+1;
    iteC=c-1;
    while(iteR<maxR && iteC>=0){
        s+=b[iteR][iteC];
        iteR++;
        iteC--;
    }
    iteR=r-1;
    iteC=c+1;
    while(iteR>=0 && iteC<maxC){
        s+=b[iteR][iteC];
        iteR--;
        iteC++;
    }
    return s+b[r][c];
}

int main(){
    int t;
    cin>>t;
    for(int tt=0; tt<t;++tt){
        int n, m;
        cin>>n>>m;
        vector<vector<int>> b;
        for(int i=0;i<n;++i){
            vector<int> r;
            for(int j=0;j<m;++j){
                int a;
                cin>>a;
                r.push_back(a);                
            }
            b.push_back(r);
        }
        
        vector<long long> ret;
        for(int i=0;i<n;++i){
            for(int j=0;j<m;++j){
                ret.push_back(sumDiag(b,i,j,n,m));                
            }
        }
        cout<<*max_element(ret.begin(),ret.end())<<"\n";
    }
    return 0;
}