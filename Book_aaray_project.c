	
	#include <stdio.h>
	
	typedef struct book
	{
		char bname[20];
		int id;
		char author[20];
		float price;
	}book;
	
	void store(book*,int);
	void display(book*,int);
	
	void main()
	{
		book brr[3];
		int i;
		
		store(brr,3);
		display(brr,3);
	}
	
	void store(book* brr,int size)
	{
		int i;
		
		for(i=0;i<size;i++)
		{
			printf("Enter Book name\n");
			scanf("%s",&brr[i].bname);
			printf("Enter id\n");
			scanf("%d",&brr[i].id);
			printf("Enter author name\n");
			scanf("%s",&brr[i].author);
			printf("Enter price\n");
			scanf("%f",&brr[i].price);
		}
	}
	
	//Display function
	void display(book* brr,int size)
	{
		int i;
		
		printf("\nBook_name\tID\t\tAuthor_name\t\tPrice\n");
		for(i=0;i<size;i++)
		{
			printf("%s\t\t%d\t\t%s\t\t%.2f\n",brr[i].bname,brr[i].id,brr[i].author,brr[i].price);
		}
	}	
	
