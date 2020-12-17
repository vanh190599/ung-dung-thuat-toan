#include <iostream>

using namespace std;

void chuyen(int n, char from, char to){
    cout<<"chuyen dia thu "<<n<<" tu cot "<<from<<" toi cot "<<to<<endl;
}

void thapHaNoi(int n, char a, char b, char c){
    if (n==1) chuyen(n, a, c);
    else {
        thapHaNoi(n-1, a, c, b);
        chuyen(n, a, c);
        thapHaNoi(n-1, b, a, c);
    }
}
int main()
{
    char a='A', b='B', c='C';
    int n = 3;
    thapHaNoi(n, a, b, c);

    return 0;
}
