#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    long long sum;
    cin>>sum;
    long long retSum = sum;
    for(int i = 0; i<n-1;++i){
        if(sum<0){
            sum=0;
        }
        long long a;
        cin>>a;
        sum+=a;
        if(sum>retSum){
            retSum=sum;
        }
    }
    cout<<retSum<<endl;
    return 0;
}