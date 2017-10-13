#include<iostream>
using namespace std;
int arrmax(int arr[],int n);
int arrmin(int arr[],int n);
int arrmean(int arr[],int n);
int arrmedian(int arr[],int n);
int arrfrequency(int arr[],int n);
int main()
{
  int n,arr[n],i,s;
  cout<<"enter number of elements in array";
  cin>>n;
  cout<<"enter elements of array";
  for(i=0;i<n;i++)
  {
    cin>>arr[i];
  }
  arrmax(arr,n);
  arrmin(arr,n);
  arrmedian(arr,n);
  arrmean(arr,n);
  arrfrequency(arr,n);
}
int arrmax(int arr[],int n)
{
  int g;	
  for(int i=0;i<n;i++)
  {
    if(arr[i+1]>arr[i])
       g=i+1;
  }
  cout<<"maximum number is="<<g<<" "<<arr[g];
  return 0;
}
int arrmin(int arr[],int n)
{
  int s;	
  for(int i=0;i<n;i++)
  {
    if(arr[i+1]<arr[i])
     s=i+1;
  }
  cout<<"minimum number is="<<s<<" "<<arr[s];
  return 0;
}
int arrmean(int arr[],int n)
{
  float sum=0;float m=0.0;	
  for(int i=0;i<n;i++)
  {
    sum=sum+arr[i];
  }
  m=sum/n;
  cout<<"mean is="<<m;
  return 0;
}
int arrmedian(int arr[],int n)
{
  int me,ne;
  if(n/2!=0)
  {
   me=(n/2)+1;
   cout<<"median="<<arr[me];
  }
  else
  {
   me=n/2;
   ne=me+1;
   cout<<"median="<<arr[me]<<" "<<arr[ne];
  }
  return 0;
}
int arrfrequency(int arr[],int n)
{
  int a,k=0,c=0,l;
  for(int i=0;i<n;i++)
  {
    for(int j=i+1;j<n;j++)
    {
      if(arr[i]==arr[j])
      {
        c=c+1;
      }
    }
    if(c>k)
    {
      l=arr[i];
      k=c;
      c=0;
    } 
  }
  cout<<"the highest frequency element is "<<l;
  return 0;
}
