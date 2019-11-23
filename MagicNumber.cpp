#include<stdio.h>
#include<conio.h>
main()
{
	int a,b=10,c=0;
	while (a!=b)
	{
		printf("ingresa el posible numero magico:  ");
		scanf("%d",&a);
		c=c+1;
		if (a<b)
		printf("%d es menor que el numero magico \n",a);
		else if(a>b) 
		printf("%d es mayor que el numero magico \n",a);
		else
		printf("%d es el numero magico y lo conseguiste a los %d intentos \n",a,c);
	}
	getch();
}

