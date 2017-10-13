#include<iostream>
using namespace std;
int arraysum(int arr[],int n);
int main()
{
  int n,arr[n],i,s;
  cout<<"enter the no of elements in array";
  cin>>n;
  cout<<"enter the numbers";
  for(i=0;i<n;i++)
  {
    cin>>arr[i];
  }
  s=arraysum(arr,n);
  cout<<"sum is="<<s;
  return 0;
}
int arraysum(int arr[],int n)
{
  int sum=0;
  for(int i=0;i<n;i++)
  {
    sum=sum+arr[i];
  }
  return sum;
}

