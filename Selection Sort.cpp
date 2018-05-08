/*
	Name: Selection Sort
	Copyright: 
	Author: 
	Date: 08/05/18 12:06
	Description: Generate random array size, insert random values in it. and calculates no. of comparisons. DO this 100 times
*/

#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;
int main()
{
	int size,temp,min; 						
	int no_comp=0; 							//number of comparisions
	cout<<"\n Size of array \tNo. of comparisions";
	for(int m=0;m<100;m++)
	{
        no_comp=0;
		size=rand()%971+30;					//generate random size between 100
		cout<<"\n\t"<<size;
		
		int ar[size];						// create array of random size
		
		for(int i=0;i<size;i++)				
    	    ar[i]=rand()%10;				// putting random values in the array
		
		for(int i=0;i<size;i++)
		{
			min=i;
			for(int j=i+1;j<size;j++)
			{
				no_comp++;
				if(ar[min]>ar[j])
					min=j;
			}
			temp=ar[min];								//
			ar[min]=ar[i];								// SWAPPING WITH MINIMUM
			ar[i]=temp;									//
		}
		cout<<"\t\t"<<no_comp;
	}
    getch();	
}
