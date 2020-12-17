#include <iostream>
using namespace std;

int *x, n;

void xuat(){
    for (int i=1; i<=n; i++) {
        if (x[i]==0) cout<<"a";
        else cout<<"b";
    }
    cout<<endl;
}

int Try(int k){
    for (int i=0; i<=1; i++) {
        x[k] = i;
        if ( k==n ) xuat();
        else Try(k+1);
    }
}

int main(){
    n = 3;
    x = new int[n+1];
    Try(0);
    return 0;
}


