#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;
int main()
{
	int size,temp,j;
	int no_comp=0;
	
	cout<<"\n Size of array \tNo. of comparisions";
	
	for(int m=0;m<100;m++)
	{
	    no_comp=0;
		size=rand()%971+30;
		cout<<"\n\t"<<size;
		
		int a[size];
		
		for(int i=0;i<size;i++)
	        a[i]=rand()%100;
		
		for(int i=1;i<size;i++)				// Sorting here
		{
			temp=a[i];
			j=i-1;	
			while(temp<a[j]&&j>=0)
			{
				no_comp++;
				a[j+1]=a[j];
				j--;
			}
			if(j>=0)
			 no_comp++;	 
			a[j+1]=temp;
		}
		cout<<"\t\t"<<no_comp;
    }
    getch();	
}
