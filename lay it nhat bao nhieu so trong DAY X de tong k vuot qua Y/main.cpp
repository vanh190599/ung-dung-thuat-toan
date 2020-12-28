#include <iostream>
using namespace std;

int binhNuoc(int *c, int m, int n, int *s) {
    for(int i=0;i<m;i++) {
        s[i]=0;
    }
    int i = m-1;
    int dem = 0;

    while (n>0 && i>=0) {
        if (n-c[i]>=0) {
            s[i]++;
            dem++;
            n=n-c[i];
            i--;
        }
        else break;
    }
    return dem;
}

int main() {
    int a[5] ={10, 20, 30, 1, 9};
    int s[5];
    int n = 10;
    int m = 5;

    cout<<"toi thieu: "<<binhNuoc(a,m,n,s)<<"\n\n";

    cout<<"result: "<<endl;
    for (int i=0; i<m; i++) {
        cout<<a[i]<<" : "<<s[i]<<endl;
    }
    return 0;
}
