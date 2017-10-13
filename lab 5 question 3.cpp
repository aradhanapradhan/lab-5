#include<iostream>
using namespace std;
int klarge(int n,int arr[],int k);
int ksmall(int n,int arr[],int k);
int main()
{
  int i,n,j,arr[n],k,t;
  cout<<"enter the no of elements in array"<<endl;
  cin>>n;
  cout<<"enter the values in array";
  for(i=0;i<n;i++)
  {
    cin>>arr[i];
  }
  cout<<"enter the value of k";
  cin>>k;
  for(int j=0;j<n;j++)
  {
    for(int k=j+1;k<n;k++)
    {
      if(arr[k]<arr[j])
      {
         t=arr[k];
         arr[k]=arr[j];
         arr[j]=t;
      }
    }
  }
  for(i=0;i<n;i++)
  {
    cout<<arr[i];
  }
  klarge(n,arr,k);
  ksmall(n,arr,k);
  
}
int klarge(int n,int arr[],int k)
{
  int l;
  l=n-k;
  cout<<arr[l];
  return 0;
}
int ksmall(int n,int arr[],int k)
{
  int m;
  m=k-1;
  cout<<arr[m];
  return 0;
}


