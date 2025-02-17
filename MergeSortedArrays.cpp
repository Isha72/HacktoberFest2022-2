#include<bits/stdc++.h>
using namespace std;

// Function to merge arrays
void mergeArrays(int a[], int b[], int n, int m)
{
	// Declaring a map.
	// using map as a inbuilt tool
	// to store elements in sorted order.
	map<int, int> mp;
	
	// Inserting values to a map.
	for(int i = 0; i < n; i++)mp[a[i]]++;
	
	
	for(int i = 0;i < m;i++)mp[b[i]]++;

	
	// Printing keys of the map.
	for(auto j: mp)
	{
		for(int i=0; i<j.second;i++)cout<<j.first<<" ";
	}
}

// Driver Code
int main()
{
	int a[] = {1, 3, 5, 7}, b[] = {2, 4, 6, 8};
	
	int size = sizeof(a)/sizeof(int);
	int size1 = sizeof(b)/sizeof(int);
	
	// Function call
	mergeArrays(a, b, size, size1);
	
	return 0;
}
