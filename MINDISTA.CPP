#include<iostream.h>
#include<conio.h>
#include<stdlib.h>

#include<math.h>
#include<limits.h>

int main()
{
	clrscr();
	int i,j,size,arr[20];
	int x=3;
	int y=6;
	int minDistance=INT_MAX;
	cout<<"Enter the size of array: ";
	cin>>size;
	cout<<"\nEnter the elements of array:\n";
	for(i=0;i<size;i++)
	{
		cin>>arr[i];
	}
	cout<<"\nThe elements of array: ";
	for(i=0;i<size;i++)
	{
		cout<<arr[i]<<" ";
	}
	for(i=0;i<size;i++)
	{
		for(j=i+1;j<size;j++)
		{
			if((x==arr[i] && y==arr[j] || y==arr[i] && x==arr[j]) && minDistance > abs (i-j))
			{
			minDistance=abs(i-j);
			}
		}
	}
	cout<<"\nMinimum distance between "<< x<<" and "<< y<<" is "<<minDistance<<endl;
	getch();
	return 0;
}