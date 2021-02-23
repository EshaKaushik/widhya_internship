// CPP Program to find sum of Manhattan
// distances between all the pairs of
// given points
#include <bits/stdc++.h>
using namespace std;

// Return the sum of distance of one axis.
int distancesum(int arr[], int n)
{
	// sorting the array.
	sort(arr, arr + n);

	// for each point, finding the distance.
	int res = 0, sum = 0;
	for (int i = 0; i < n; i++) {
		res += (arr[i] * i - sum);
		sum += arr[i];
	}

	return res;
}

int totaldistancesum(int x[], int y[], int n)
{
	return distancesum(x, n) + distancesum(y, n);
}

// Driven Program
int main()
{
	int x[] = { -1, 1, 3, 2 };
	int y[] = { 5, 6, 5, 3 };
	int n = sizeof(x) / sizeof(x[0]);
	cout << totaldistancesum(x, y, n) << endl;
	return 0;
}
