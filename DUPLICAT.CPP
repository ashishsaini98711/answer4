#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int arr[20],i,index,size;
	cout<<"Enter the size of array: ";
	cin>>size;
	cout<<"enter the elements of array\n";
	for(i=0;i<size;i++)
	{
		cin>>arr[i];
	}
	cout<<"The elements of array\n";
	for(i=0;i<size;i++)
	{
		cout<<arr[i]<<" ";
	}
	for(i=0;i<size;i++)
	{
		index=arr[i]%size;
		arr[index]+=size;
	}
	cout<<"\nThe DUPLICATE elements are;";
	for(i=0;i<size;i++)
	{
		if((arr[i]/size)>=2)
		cout<<i<<" ";
	}
	getch();
}