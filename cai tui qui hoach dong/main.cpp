#include <iostream>
/** Số giá trị có thể bỏ vào cái túi tối đa là bao nhiêu không vượt quá n giá trị */
using namespace std;

int F[100][100];
int w[6]= {5,12,2,1,1,4};
int v[6]={15,4,2,1,2,10};
int m, n;

void dp_algorithm(){
    int temp;

    for (int j=0; j<=m; j++) F[0][j]=0;

    for (int i=1; i<=n; i++){
        for (int j=0; j<=m; j++) {
            F[i][j] = F[i-1][j];
            temp = F[i-1][j-w[i]] + v[i];
            if (w[i]<=j && F[i][j]<temp)
                F[i][j]=temp;
        }
    }
}

void result(){
    cout<<"Max value: "<<F[n][m]<<endl;

    int i = n;
    int j = m;
    while (i!=0) {
        if (F[i][j] != F[i-1][j]) {
            cout<<i<<" ";
            j = j-w[i];
        }
        i--;
    }
}
int main()
{
    n = 5;
    m = 15;
    dp_algorithm();
    result();
}
