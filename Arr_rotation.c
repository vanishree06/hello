#include <bits/stdc++.h> 
using namespace std;
void leftRotatebyOne(int arr[], int n) 
{ 
	int temp = arr[0], i; 
	for (i = 0; i < n - 1; i++) 
		arr[i] = arr[i + 1]; 
	arr[i] = temp; 
} 
void leftRotate(int arr[], int d, int n) 
{ 
	for (int i = 0; i < d; i++) 
		leftRotatebyOne(arr, n); 
} 
void printArray(int arr[], int n) 
{ 
	for (int i = 0; i < n; i++) 
		cout << arr[i] << " "; 
} 
int main() 
{ 
	int arr[] = { 0,3,6,9,12,14,18,20,22,25,27 }; 
	int n = sizeof(arr) / sizeof(arr[0]); 
	leftRotate(arr, 4, n); 
	printArray(arr, n); 

	return 0; 
} 
