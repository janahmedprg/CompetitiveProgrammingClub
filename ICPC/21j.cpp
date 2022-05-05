#include <bits/stdc++.h>

using namespace std;

#define ar array
#define ll long long
#define ld long double
#define sza(x) ((int)x.size())
#define all(a) (a).begin(), (a).end()

int* solve(int p, int q, string order, int* er) {
    int Bb, Bi, Ba, A1, A2, B1, B2;
    
    if(order == "AABB"){
        Bb = 0;
        Bi = 0;
        Ba = 2;
    }
    else if(order == "ABAB"){
        Bb = 0;
        Bi = 1;
        Ba = 1;
    }
    else if(order == "ABBA"){
        Bb = 0;
        Bi = 2;
        Ba = 0;
    }
    else if(order == "BBAA"){
        Bb = 2;
        Bi = 0;
        Ba = 0;
    }
    else if(order == "BABA"){
        Bb = 1;
        Bi = 1;
        Ba = 0;
    }
    else if(order == "BAAB"){
        Bb = 1;
        Bi = 0;
        Ba = 1;
    }
    if(p > q){
        A1 = q;
        A2 = p;
    }
    else{
        A1 = p;
        A2 = q;
    }
    if(Bb != 0){
        if(A1 != Bb+1){
            er[0] = -1;
            return er;
        }
        else{
            if(Bb == 1){
                B1 = 1;
            }
            else if(Bb == 2){
                B1 = 1;
                B2 = 2;
            }
        }
    }
    if(Bi != 0){
        if(A2 - A1 != Bi + 1){
            er[0] = -1;
            return er;
        }
        else{
            if(Bi == 1){
                if(Bb == 1){
                    B2 = A1+1;
                }
                else{
                    B1 = A1+1;
                }
            }
            else if(Bi == 2){
                B1 = A1+1;
                B2 = A1+2;
            }
        }
    }
    if(Ba != 0){
        if(A2 != 9-Ba){
            er[0] = -1;
            return er;
        }
        else{
            if(Ba == 1){
                B2 = 9;
            }
            else if(Ba == 2){
                B1 = 8;
                B2 = 9;
            }
        }
    }
    er[0] = B1;
    er[1] = B2;
    return er;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int a1,a2;
    string o;

    cin>>a1>>a2;
    cin>>o;
    int arr[2];
    solve(a1,a2,o,arr);
    if (arr[0]==-1){
        cout<<-1<<endl;
    }
    else{
        cout<<arr[0]<<" "<<arr[1]<<endl;
    }
    return 0;
}