#include <iostream>
using namespace std;

//*Câu 2:  cho dãy số thực x và số thực y. Cho biết cần lấy nhiều nhất bao nhiêu số trong x để tổng của chúng k vượt quá y
float binhNuoc(float *c, int m, float n, float *s) {
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
    float a[5] ={100.5,25.6,10.1,5.2,1.8};
    float s[5];
    float n = 19.9;
    int m = 5;

    cout<<"toi thieu: "<<binhNuoc(a,m,n,s)<<"\n\n";

    cout<<"result: "<<endl;
    for (int i=0; i<m; i++) {
        cout<<a[i]<<" : "<<s[i]<<endl;
    }
    return 0;
}
