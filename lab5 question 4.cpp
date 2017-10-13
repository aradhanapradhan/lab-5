#include <iostream>
using namespace std;
int largest(int arr[],int n);
int smallest(int ar[],int n);
int main() 
{
	int n1,n2,n,arr1[n1],arr2[n2],arr[n],k=0,i,j;
	n=n1+n2;
	cout<<"enter the size of first array"<<endl;
	cin>>n1;
	cout<<"enter the elements of first array"<<endl;
	for(i=0;i<n1;i++)
	{
		cin>>arr1[i];
	}
	cout<<"enter the size of second array"<<endl;
	cin>>n2;
	cout<<"enter the values of second array"<<endl;
	for(i=0;i<n2;i++)
	{
		cin>>arr2[i];
	}
	for(i=0;i<n1;i++)
	{
		arr[i]=arr1[i];
	}
	for(i=n1,k=0;i<n2&&i<n,k<n2;i++,k++)
	{
		arr[i]=arr2[k];
	}
	cout<<"new array"<<endl;
	for(i=0;i<n;i++)
	{
		cout<<arr[i]<<endl;
	}
	largest(arr,n);
	smallest(arr,n);
}	
    int largest(int arr[],int n)
    {
     int i,max=arr[0];
     for(i=0;i<n;i++)
     {
          if(arr[0]<arr[i])
            max=arr[i];
     }
     cout<<"maximum no="<<max;
    }
    int smallest(int arr[],int n)
    {
     int i,min=arr[0];
     for(i=0;i<n;i++)
     {
          if(arr[i]<arr[0])
            min=arr[i];
     }
     cout<<"smallest no="<<min;
    }
    