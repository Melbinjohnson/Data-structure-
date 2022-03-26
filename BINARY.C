#include<stdio.h>
#include<conio.h>
void main()
{
	int a[20],i,n,item,beg,end,mid,pos=-1;
	clrscr();
	printf("enter the size of array");
	scanf("%d",&n);
	printf("enter the array elements");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enter the element to be searched");
	scanf("%d",&item);
	beg=0;
	end=n-1;
	while(beg<=end)
	{
		mid=(beg+end)/2;
		if(a[mid]==item)
		{
			pos=mid;
			printf("Successful Search!!..%d is found at location %d",item,pos+1);
			break;
		}
		else if(a[mid]>item)
		end=mid-1;
		else
		beg=mid+1;
	}
	if(pos==-1)
	printf("Unsuccessful Serach!!..%d is not found",item);
	getch();

}
