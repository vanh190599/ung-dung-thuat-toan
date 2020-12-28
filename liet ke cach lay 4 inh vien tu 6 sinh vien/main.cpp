#include <bits/stdc++.h>
using namespace std;

int a[6];
void view_config(int k){
    for (int i=1; i<=k; i++) {
        if (a[i]==1) cout<<"1 ";
        else if (a[i]==2) cout<<"2 ";
        else if (a[i]==3) cout<<"3 ";
        else if (a[i]==4) cout<<"4 ";
        else if (a[i]==5) cout<<"5 ";
        else cout<<"6 ";
    }
    cout<<"\n";
}

void next_config(int k, int i) {
    a[i]+=1;
    i++;
    while (i<=k) {
        a[i] = a[i-1] + 1;
        i++;
    }
}

void config(int n, int k){
    int i;
    for (int i=1; i<=k; i++) a[i] = i;
    do {
        view_config(k);
        i = k;
        while (i>0 && a[i] == n-k+i) {
            i--;
        }
        if (i>0) next_config(k, i);
    } while (i>0);
}

int main(){
    int n = 5;
    config(n, 4);
    return 0;
}
