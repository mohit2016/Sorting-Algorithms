#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;
int no_comp=0;
int n,a[10];
int heapsize;
void maxheapify(int i)
{	
	int l=2*i+1;
	int r=2*i+2;
	if(l<n && r<n)
	{
		no_comp=no_comp+2;
	}
	int large;
	if(l<heapsize&&a[l]>a[i])
		large=l;
	else
		large=i;
	if(r<heapsize&&a[r]>a[large])
		large=r;
	if(large!=i)
	{
		int temp=a[i];
		a[i]=a[large];
		a[large]=temp;
		maxheapify(large);
	}
}
void buildmaxheap()
{
	for(int i=n/2-1;i>=0;i--)
	{
		maxheapify(i);
	}
}
void heapsort()
{
	buildmaxheap();
	for(int i=0;i<=n-1;i++)
	{
		int temp=a[0];
		heapsize--;
		a[0]=a[heapsize];
		a[heapsize]=temp;
		maxheapify(0);
	}
}
int main()
{
	cout<<"\n Size of array \tNo. of Comparisions";
	for(int m=0;m<100;m++)
	{
		n=rand()%971+30;
		heapsize=n;
		cout<<"\n\t"<<n;
		for(int i=0;i<n;i++)
    	    a[i]=rand()%10;
    	heapsort();
     	cout<<"\t\t"<<no_comp;
	}
}
