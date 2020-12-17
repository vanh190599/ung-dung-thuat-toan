#include <iostream>
#include <algorithm>
using namespace std;

string s;
char p;
int a[100001],b;

int binsearchLEFT(int x, int l, int r)
{
	while (l<=r)
	{
		int mid = (l+r)/2;
		if (x<=a[mid]) r=mid-1;
		else l=mid+1;
	}
	return l;
}
int binsearchRIGHT(int x, int l, int r)
{
	while (l<=r)
	{
		int mid = (l+r)/2;
		if (x<a[mid]) r=mid-1;
		else l=mid+1;
	}
	return r;
}

int main() {
	s="abbbbbbcbcc";
	p='b';

	for (int i=0;i<s.length();i++)
		a[i]=(int)(s[i]);
	b=(int)(p);

	sort(a,a+s.length());

	int LEFT = binsearchLEFT(b,0,s.length()-1);
	int RIGHT = binsearchRIGHT(b,0,s.length()-1);
	if (s[LEFT] != p || s[RIGHT] != p)
		cout << 0 << endl;
	else
		cout << RIGHT - LEFT + 1 << endl;
	return 0;
}
