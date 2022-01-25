
//Shasmur Rahman
#include<iostream>
using namespace std;

int getNums(int arr[], int size, int n);

int main()
{
int size,n;
cout<<"Enter an array size: ";
cin>>size;
int arr[size];
cout<<"\nEnter the elements of the array: \n";
for(int i=0;i<size;i++)
{
cin>>arr[i];
}
cout<<"\nEnter an integer: ";
cin>>n;
cout<<"\n-------------------------------------\n";
cout<<"\nThere are "<<geNums(arr,size,n)<<" integers less than 10.";
return 0;
}


int getNums(int arr[], int size, int n)
{
int count=0;
for(int i=0;i<size;i++)
{
if(arr[i]<n)
{
count++;
}
}
return count;
}
