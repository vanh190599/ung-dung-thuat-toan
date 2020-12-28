#include <bits/stdc++.h>

using namespace std;

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
    string s = "ahsfjhfacafg";
    char ch = 'a';
    sort(s.begin(),s.end());

    int firstIndex = fisrt(ch,0,s.length() - 1,s);
    int lastIndex = last(ch,0,s.length() - 1,s);

    if(lastIndex == -1){
        std::cout << 0 << std::endl;
    } else {
        cout<<lastIndex - firstIndex + 1;
    }
    return 0;
}
