#include<iostream>
#include <bits/stdc++.h>
using namespace std;

void print(int array[],int size){
	// takes O(n) time
	for (int i = 0; i < size; ++i)
	{
		cout<<array[i]<<" ";
	}
	cout<<endl;
}

void swap(int array[],int size, int ind1, int ind2){
	int temp=array[ind1];
	array[ind1]=array[ind2];
	array[ind2]=temp;
}

int findMinIndex(int array[], int size){
	// Takes O(n) time
	int minIndex=0;

	for (int i = 0; i < size; ++i)
	{
		if (array[minIndex]>array[i])
		{
			minIndex=i;
		}
	}
	return minIndex;
}
int findMinIndexSpecial(int array[], int size,int startIndex){
	// Takes O(n-start) time
	int minIndex=startIndex;

	for (int i = startIndex; i < size; ++i)
	{
		if (array[minIndex]>array[i])
		{
			minIndex=i;
		}
	}
	return minIndex;
}


void NaiveSelectionSort(int array[], int size){
	// O(n2) - time complexity
	// O(n)  - space complexity
 	
 	// Empty array
 	int sorted[size];


 	// traversing through array
 	for (int i = 0; i < size; ++i)
 	{
 		// Finding minimum element and replacing it with infinity
 		int min=findMinIndex(array,size);
 		sorted[i]=array[min];
 		array[min]=INT_MAX;
 	 }
 	 
 	 for (int i = 0; i < size; ++i)
 	 {	
 	 	// Copying each element from sorted array to input array
 	 	array[i]=sorted[i];
 	 }

}
void SelectionSort(int array[], int size){
	// O(n2) - Time complexity
	// O(1) - Space complexity

	for (int i = 0; i < size; ++i)
	{
		int min=findMinIndexSpecial(array,size,i);
		swap(array,size,i,min);
	}
}


// Driver code....
int main(){

	// Welcome message
	cout<<"Welcome to Selection Sort!"<<endl;
	cout<<"==========================="<<endl;
	cout<<endl;
	int n;

	// Taking size of array as n

	cout<<"Please Enter the number of elements: ";
	cin>>n;
	cout<<"\n"<<endl;

	// Declaring array with size n
	int arr[n];

	// Taking each element as input
	for(int i=0;i<n;++i){
		int element;
		cout<<"Please enter the value of the element: ";
		cin>>element;
		cout<<endl;
		arr[i]=element;
	}


	// Naive Selection sort
	// NaiveSelectionSort(arr,n);

	// General Selection sort
	SelectionSort(arr,n);

	//Printing out the sorted Array 
	print(arr,n);

	return 0;
}