#include <iostream>

using namespace std;

void MaxMin(int a[],int l, int r,int &min, int &max) {
	int min1, min2, max1, max2;
	if (l == r) {
		max = min = a[l];
	}
	else {
		int mid = (l + r) / 2;
		min1 = l, max1 = mid;
		min2 = mid + 1, max2 = r;
		MaxMin(a, l, mid, min1, max1);
		MaxMin(a, mid + 1, r,min2,max2);

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
int main() {
	int c[5] = {4, 5, 10 ,0 , 8};
	int min = c[0];
	int max = c[4];

	MaxMin(c, 0, 4, min, max);
	cout << max << " - " << min << endl;

	return 0;
}
