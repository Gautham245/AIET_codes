
#include <iostream> 
using namespace std; 
int find_value(int a[], int n, int k) 
{ 
	int sum = 0; 
	for (int i = 0; i < n; i++) { 
		sum += a[i]; 
	} 
	return sum % k; 
} 
int main() 
{ 
	int n, k,a[20]; 
	cout<<"Enter the number of element\n";
	cin>>n;
	cout<<"Enter the elements\n";
	for(int i=0;i<n;i++)
		cin>>a[i];
	cout<<"Enter the vake of K\n";
	cin>>k;
	cout<<"The last remaining element : "<< find_value(a, n, k)<<endl;  
	return 0; 
} 

