//2021 Kattis Practice C

#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin>> n;
    vector<vector<double>> coor;
    for(int i=0;i<n;i++){
        double a,b;
        cin>>a>>b;
        vector<double> xy;
        xy.push_back(a);
        xy.push_back(b);
        coor.push_back(xy);
    }
    coor.push_back(coor[n-1]);
    vector<double> distV;
    for(int i=0;i<n;i++){
        vector<double> distVm;
        double vx = coor[i][0] - coor[i+1][0];
        double vy = coor[i][1] - coor[i+1][1];
        double c = -vy*coor[i][0]+vx*coor[i][1];
        for(int j = 0; j<n; j++){
            double dist = abs(vy*coor[j][0]-vx*coor[j][1]+c)/pow(pow(vx,2)+pow(vy,2),0.5);
            distVm.push_back(dist);
        }
        distV.push_back(*max_element(distVm.begin(),distVm.end()));
    }
    cout<<*min_element(distV.begin(),distV.end())<<endl;

}