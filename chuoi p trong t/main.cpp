#include <iostream>
#include <bits/stdc++.h>

using namespace std;

bool indexOf(char *p, char *t){
    int m = strlen(p);
    int n = strlen(t) - m;

    for (int i=0; i<n+1; i++) {
        int j=0;
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
