#include <stdio.h>
void create();
void display();
void insert();
void remove();
int a[50], n;
int main()
{
	int ch;
	do
	{
		printf("\nARRAY OPERATIONS\n");
		printf("1.create\n2.display\n3.insert\n4.delete\n5.EXIT\n");
		printf("enter your choice:");
		scanf("%d", &ch);
		switch (ch)
		{
		case 1:
			create();
			printf("\narray created\n");
			break;
		case 2:
			display();
			break;
		case 3:
			insert();
			break;
		case 4:
			remove();
			break;
			return 0;
		}
	} while (ch != 5);
}
void create()
{
	int i = 0;
	printf("enter the limit:");
	scanf("%d", &n);
	printf("enter the elements:\n");
	while (i <= n - 1)
	{
		scanf("%d", &a[i]);
		i++;
	}
}
void display()
{
	int i;

	printf("The array elements are:\n");
	for (i = 0; i < n; i++)
	{
		printf("%d\n", a[i]);
	}
}
void insert()
{
	int x, item, i;
	i = n;
	printf("enter the position:");
	scanf("%d", &x);
	printf("enter the element to be insert:");
	scanf("%d", &item);
	while (i >= x)
	{
		a[i + 1] = a[i];
		i = i - 1;
	}
	n = n + 1;
	a[x] = item;
	printf("\nNew item-%d is inserted\n", item);
}
void remove()
{
	int x, item, i;
	printf("enter the position:");
	scanf("%d", &x);
	i = x;
	item = a[x];
	while (i <= n - 1)
	{
		a[i] = a[i + 1];
		i = i + 1;
	}
	n = n - 1;
	printf("\n%d is deleted\n", item);
}
