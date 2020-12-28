#include <iostream>
#include <bits/stdc++.h>
using namespace std;



/**
//min max
void MaxMin(int a[], int l, int r, int &min, int &max){
    int min1, max1, min2, max2;
    if (l==r) {
        min = max = a[l];
    } else {
        int mid = (l+r)/2;
        min1 = l; max1 = mid;
        min2 = mid + 1; max2 = r;
        MaxMin(a, l, mid, min1, max1);
        MaxMin(a, mid+1, r, min2, max2);

        if (min1 < min2) {
            min = min1;
        } else {
            min = min2;
        }

        if (max1 < max2) {
            max = max2;
        } else {
            max = max1;
        }
    }
 }

 int main (){
    int a[5] = {1, 0, 6, 9, 4};
    int min = a[0];
    int max = a[4];
    MaxMin(a, 0, 4, min, max);
    cout<<max<<" - "<<min;
    return 0;
 }

/**
//lay 4 sinh vien tu 6 sinh vien
int *a;
int n;

void view(int k){
    for (int i=1; i<=k ;i++) {
        if (a[i] == 1) cout<<"1 ";
        else if (a[i] == 2) cout<<"2 ";
        else if (a[i] == 3) cout<<"3 ";
        else if (a[i] == 4) cout<<"4 ";
        else if (a[i] == 5) cout<<"5 ";
        else cout<<"6 ";
    }
    cout<<endl;
}


void next_config(int k, int i){
    a[i]+=1;
    i++;
    while (i<=k) {
        a[i] = a[i-1] + 1;
        i++;
    }
}

void config(int n, int k) {
    int i;
    for (int i=1; i<=k; i++) a[i] = i;
    do {
        view(k);
        i = k;
        while (i>0 && a[i] == n-k+i) {
            i--;
        }
        if (i>0) next_config(k, i);
    } while(i>0);
}

int main(){
    int n = 5;
    a = new int[n+1];
    config(n, 4);
    return 0;
}




/**
//xep 4 sinh vien vao ban tron
int *x;
int *dd;
int n;

void xuat(){
    for (int i=1; i<=n; i++) {
        if (x[i] == 1) cout<<"mot ";
        else if (x[i] == 2) cout<<"hai ";
        else cout<<"ba ";
    }
    cout<<"\n";
}

void Try(int k){
    for (int i=1; i<=n; i++) {
        if (dd[i]==0) {
            x[k] = i;
            if (k==n) xuat();
            else {
                dd[i] = 1;
                Try(k+1);
                dd[i] = 0;
            }
        }
    }
}

int main(){
    n = 3;
    x = new int[n+1];
    dd = new int[n+1];
    for (int i=1; i<=n; i++) {
        dd[i] = 0;
    }
    Try(1);

    return 0;
}

/**
//so cach phan tich so nguyen duong thanh tong cac so nho hon no
void xuLy(int n, int X[], int T[], int i){
    for (int j=X[i-1]; j<=(n-T[i-1]); j++) {
        X[i] = j;
        T[i] = T[i-1] + j;

        if (T[i] == n) {
            for (int t=1; t<=i; t++){
                cout<<X[t]<<" ";
            }
            cout<<endl;
        } else {
            xuLy(n, X, T, i+1);
        }
    }
}

int main(){
    int n = 4;
    int X[n+1]; X[0] = 1;
    int T[n+1]; T[0] = 0;
    xuLy(n, X, T, 1);
    return 0;
}

/**
//sinh chuoi ky tu ab
int *x;
int n;

void xuat(){
    for (int i=1; i<=n; i++) {
        if (x[i] == 0) cout<<"a";
        else cout<<"b";
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

int main(){
    n = 3;
    x = new int[n+1];
    Try(0);
    return 0;
}

/**
//day p trong t
int indexOf(char *p, char *t){
    int m = strlen(p);
    int n = strlen(t) - m;

    for (int i=0; i<n+1; i++) {
        int j = 0;
        while (j<m && t[j+i] == p[j]) {
            j++;
        }
        if (j==m) {
            return i;
        }
    }
    return -1;
}
int main(){
    char *t = "mot hai";
    char *p = "hai1";
    if (indexOf(p, t)!=-1) cout<<"Co";
    else cout<<"khong";
    return 0;
}


/**
//thap ha noi
void chuyen(int n,char cotA, char cotB){
    cout<<"chuyen dia thu "<<n<<" tu cot "<<cotA<<" sang cot "<<cotB<<"\n";
}

void thap(int n, char a, char b, char c){
    if (n==1) chuyen(n, a, c);
    else {
        thap(n-1, a, c, b);
        chuyen(n, a, c);
        thap(n-1, b, a, c);
    }
}

int main(){
    char a, b, c;
    a = 'A';
    b = 'B';
    c = 'C';
    int n = 3;
    thap(n, a, b, c);
    return 0;
}
*/
