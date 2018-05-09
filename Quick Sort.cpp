#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;
int no_comp=0;
int partition(int ar[],int p,int r)
{
	int temp;
	int pivot=r;
	int i=p-1;
	for(int j=p;j<r;j++)
	{
		no_comp++;
		if(ar[j]<=ar[pivot])
		{
			i++;
			temp=ar[i];
			ar[i]=ar[j];
			ar[j]=temp;
		}	
	}
		i++;
		temp=ar[i];
		ar[i]=ar[pivot];
		ar[pivot]=temp;
	return (i);
}

void quicksort(int ar[],int p,int r)
{
	if(p>r)
		return;
	int q=partition(ar,p,r);
	quicksort(ar,p,q-1);
	quicksort(ar,q+1,r);
}

int main()
{
	int n;
	cout<<"\n Size of array \tNo. of comparisions";
	for(int m=0;m<100;m++)
	{
        no_comp=0;
		n=rand()%971+30;
		cout<<"\n\t"<<n; 
		int ar[n];
		for(int i=0;i<n;i++)
    	    ar[i]=rand()%10;
		quicksort(ar,0,n-1);
		cout<<"\t\t"<<no_comp;
	}
    getch();	
}
