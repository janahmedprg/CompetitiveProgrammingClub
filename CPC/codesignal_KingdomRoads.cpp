#include <bits/stdc++.h>

using namespace std;

vector<vector<int>> solution(int cities, vector<vector<int>> roads) {
    int max = roads.size();
    for(int i =0; i< max; ++i){
        if (roads[i][0]>roads[i][1]){
            int x  = roads[i][0];
            roads[i][0] = roads[i][1];
            roads[i][1] = x;
        }
    }
    sort(roads.begin(),roads.end());
    cout<<"==============\n";
    for(auto a : roads){
        for(int c:a){
            cout<<c<<" ";
        }
        cout<<"\n";
    }
    cout<<"==============\n";
    vector<vector<int>> sol;
    vector<vector<int>> combo;
    for(int i = 0; i<cities;++i){
        for(int j = i+1;j<cities;++j){
            vector<int> tmp;
            tmp.push_back(i);
            tmp.push_back(j);
            combo.push_back(tmp);
        }
    }
    int k = combo.size();
    int idx = 0;
    for (int i = 0; i<k;++i){
        if(idx<max && combo[i][0] == ((roads[idx][0] < roads[idx][1]) ? roads[idx][0] : roads[idx][1]) && combo[i][1] == ((roads[idx][0] > roads[idx][1]) ? roads[idx][0] : roads[idx][1])){
            idx +=1;
        }
        else{
            sol.push_back(combo[i]);
        }
    }
    return sol;
}

int main(){
    vector<vector<int>> v = {{5,8}, 
 {6,0}, 
 {0,5}, 
 {4,1}, 
 {0,1}, 
 {7,0}, 
 {6,8}, 
 {7,3}, 
 {2,6}, 
 {0,2}, 
 {0,3}, 
 {8,7}, 
 {5,4}, 
 {8,4}, 
 {8,2}, 
 {7,1}, 
 {4,6}, 
 {5,6}, 
 {4,2}, 
 {4,7}, 
 {2,7}, 
 {3,6}, 
 {8,0}, 
 {1,6}, 
 {3,2}, 
 {3,4}, 
 {4,0}, 
 {6,7}, 
 {5,7}};
    vector<vector<int>> s;
    s=solution(9,v);
    for(auto a : s){
        for(int c:a){
            cout<<c<<" ";
        }
        cout<<"\n";
    }
    return 0;
}