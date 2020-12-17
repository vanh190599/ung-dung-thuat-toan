#include <iostream>
#include <bits/stdc++.h>

using namespace std;

/** ====== tổng các số nguyên < n ======
void xuLy(int n, int X[], int T[], int i) {
    for (int j=X[i-1]; j<=(n-T[i-1]); j++) {
        X[i] = j;
        T[i] = T[i-1] + j;
        if (T[i] == n) {
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
    int n=4;
    int X[n+1]; X[0] = 1;
    int T[n+1]; T[0] = 0;
    xuLy(n, X, T, 1);
    return 0;
}


/** ====== sinh ky tu a, b ==============
int *x, n;
void xuat(){
    for (int i=1; i<=n; i++) {
        if (x[i] == 0) cout<<'a';
        else cout<<'b';
    }
    cout<<"\n";
}

void Try(int k){
    for (int i=0; i<=1; i++) {
        x[k] = i;
        if (k==n) xuat();
        else Try(k+1);
    }
}

int main()
{
    n = 3;
    x = new int[n+1];
    Try(0);
    return 0;
}
*/
