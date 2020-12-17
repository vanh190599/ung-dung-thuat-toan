#include <iostream>
#include <algorithm>
using namespace std;

void xuLy(int n, int X[], int T[], int i){
    for (int j=X[i-1]; j<=(n-T[i-1]); j++) {
        X[i]= j;
        T[i]= T[i-1] + j;

        if (T[i]==n) {
            for (int t=1; t<=i; t++) {
                cout<<X[t]<<" ";
            }
            cout<<"\n";
        } else {
            xuLy(n, X, T, i+1);
        }
    }
}

int main(){
    int n=5;
    int X[n+1]; X[0] = 1;
    int T[n+1]; T[0] = 0;
    xuLy(n, X, T, 1);
    return 0;
}
