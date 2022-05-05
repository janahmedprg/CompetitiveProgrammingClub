#include <bits/stdc++.h>

using namespace std;

int days(int n, int p, int k, vector<int> arr);

int days(int n, int p, int k, vector<int> arr){
    int dayc = 0;
    int ind = 0;
    int sum = 0;
    int totsum = 0;
    int d = 0;
    for(int i = 0; i < n; i++){
        d += arr[i];
    }
    for(int i = 0; i < k; i++){
        sum = 0;
        while(true){
            if((sum + arr[ind]) <= p){
                sum += arr[ind];
                totsum += arr[ind];
                if(ind == n-1){
                    ind = 0;
                }
                else{
                    ind++;
                }
            }
            else{
                break;
            }
        }
    }
    dayc = totsum / d;
    return dayc;
}

int main(){
    int n,p,k;
    cin >> n >> p >> k;
    vector<int> v;
    for (int i=0;i<n;++i) {
        int x;
        cin >> x;
        v.push_back(x);
    }

    cout << days(n, p, k, v) << endl;
}