#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *p,n,i;
	printf("\n Enter how many elements : ");
	scanf("%d",&n);
	p = (int *)calloc(n sizeof(int));
	if(p==NULL)
	{
		fprintf(stderr,"\nFail to alloct memory\n");
		exit(1);	
	}
	printf("\nMemory allocated at:%x",p);
	printf("\n Intial Values\n");
	for(i=0;i<n;i++)
		printf("%d ",p[i]);
        for(i=0;i<n;i++)
                p[i] = i+1;
	printf("\n");
	for(i=0;i<n;i++)
                printf("%d ",p[i]);
	printf("\n");
	free(p);
}
