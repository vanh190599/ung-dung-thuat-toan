#include <bits/stdc++.h>

using namespace std;

/** cach xep 3 sinh vien vao ban an **/
int *x;
int *dd;
int n;

void xuat(){
    for (int i=1; i<=n; i++) {
        if (x[i]==1) cout<<"mot ";
        else if (x[i]==2) cout<<"hai ";
        else cout<<"ba ";
    }
    cout<<"\n";
}

void Try(int k){
   for (int i=1; i<=n; i++) {
        if (dd[i]==0) {
            x[k]=i;
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
int fisrt(char ch, int l, int r, string s){
    while(l<=r){
        int mid = (l + r) / 2;
        if(ch<=s[mid]) r = mid - 1;
        else l = mid + 1;
    }
    if(l>=s.length() || l < 0) return -1;
    else return l;
}

int last(char ch, int l, int r, string s){
    while(l<=r){
        int mid = (l + r) / 2;
        if(ch<s[mid]) r = mid - 1;
        else l = mid + 1;
    }
    if(r>=s.length() || r < 0) return -1;
    if(s[r] != ch) return -1;
    else return r;
}
int main()
{
    string s = "aaaabbbbabcccca";
    char ch = 'a';

    sort(s.begin(),s.end());

    int firstIndex = fisrt(ch,0,s.length() - 1,s);
    int lastIndex = last(ch,0,s.length() - 1,s);

    if(lastIndex == -1){
        cout << 0 << endl;
    } else {
        cout<<lastIndex - firstIndex + 1;
    }
    return 0;
}
/**
void chuyen(int n, char cotA, char cotB){
    cout<<"chuyen dia thu "<<n<<" tu cot "<<cotA<<" sang cot "<<cotB<<endl;
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
    char a = 'A';
    char b = 'B';
    char c = 'C';
    int n = 3;
    thap(3, a, b, c);
    return 0;
}

/**
int xuLy(int n, int X[], int T[], int i){
    for (int j = X[i-1]; j <= (n-T[i-1]); j++){
        X[i] = j;
        T[i] = T[i-1] + j;

        if (T[i]==n) {
            for (int t=1; t<=i; t++) {
                cout<<X[t]<<" ";
            }
            cout<<endl;
        } else {
            xuLy(n, X, T, i+1);
        }
    }
}

int main(){
    int n = 5;
    int X[n+1]; X[0] = 1;
    int T[n+1]; T[0] = 0;
    xuLy(n, X, T, 1);

    return 0;
}

/**
bool indexOf(char *p, char *t){
    int m = strlen(p);
    int n = strlen(t) - m;

    for (int i=0; i<n+1; i++) {
        int j = 0;
        while (j<m && t[j+i] == p[j]) {
            j++;
        }
        if (j==m) {
            return true;
        }
    }
    return false;
}

int main()
{
    char *t = "mot hai ba bon nam";
    char *p = "mot";
    if (indexOf(p, t)) cout<<"Co";
    else cout<<"Khong";

    return 0;
}
*/

/**
int *x, n;

void xuat(){
    for (int i=0; i<n; i++) {
        if (x[i] == 0) cout<<"a";
        else cout<<"b";
    }
    cout<<endl;
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
**/
