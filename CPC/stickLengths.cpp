#include <bits/stdc++.h>

using namespace std;

double findMedian(vector<long long> a,
                  int n)
{
    if (n % 2 == 0) {
        nth_element(a.begin(),a.begin() + n / 2,a.end());
        return a[n/2];
    }

    else {
        nth_element(a.begin(),a.begin() + n / 2,a.end()); 
        return a[n / 2];
    }
}

int main(){
    int n;
    cin>>n;
    if(n==1){
        cout<<0<<"\n";
    }
    else{
        vector<long long> v;
        long long a;
        for(int i=0; i<n;++i){
            cin>>a;
            v.push_back(a);
        }
        long long med = findMedian(v,v.size());
        long long ret=0;
        for(int i=0;i<n;++i){
            ret+=abs(v[i]-med);
        }
        cout<<ret<<"\n";
    }
    return 0;
}