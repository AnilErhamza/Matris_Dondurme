#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main (){
	int i,j,n,o,p,s;
	printf("NxN lik M matrisinin N degerini girin:");
	scanf("%d",&n);
	int k[n][n], l[n][n];
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("M[%d][%d] degerini girin:",i,j);
			scanf("%d",&k[i][j]);
		}
	}
	printf("saga donurmek icin 1, sola dondurmek icin 2 girin:");
	scanf("%d",&s);
	if(s==1)
	{
		i=0;
		j=0;
		o=0;
		p=n-1;
		while(j<n)
		{
			i=0;
			p=n-1;
			while(i<n)
			{
				l[o][p]=k[i][j];
				i++;
				p--;
			}
			j++;
			o++;	
		}
	}
	else if(s==2)
	{
		i=0;
		j=0;
		o=n-1;
		p=0;
		while(j<n)
		{
			i=0;
			p=0;
			while(i<n)
			{
				l[o][p]=k[i][j];
				i++;
				p++;
			}
			j++;
			o--;	
		}
	}
	else
	{
		 printf("gecerli bir komut girmediniz.");
		 return 0;
	}
	
	
	printf("sonuc:\n");

	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%4d",l[i][j]);
		}
		printf("\n");
	}
	return 0;
}
