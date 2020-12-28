#include <iostream>

using namespace std;
int *x,*dd,n;

void xuat()
{
    for(int i=1;i<=n;i++){
        if(x[i]==1) cout<<"tam ";
        else if(x[i]==2) cout<<"toan ";
        else  cout<<"tu ";
    }
    cout<<endl;
}
void Try(int k){
    for(int i=1;i<=n;i++){
        if(dd[i]==0){
            x[k]=i;
            if(k==n) xuat();
            else{
                dd[i]=1;
                Try(k+1);
                dd[i]=0;
            }
        }
    }
}

int main()
{
    n=3;
    x = new int[n+1];
    dd = new int[n+1];
    for (int i=1;i<=n;i++) {
        dd[i]=0;
    }
    Try(1);
    return 0;
}
