#include"header.h"
int main()
{
	int rows,col;
	scanf("%d%d",&rows,&col);
int a[rows][col];
for(int i=0;i<rows;i++)
{
for(int j=0;j<col;j++)
{
scanf("%d",&a[i][j]);
}
}

for(int i=0;i<rows;i++,printf("\n"))
{
for(int j=0;j<col;j++)
{
printf("%d",a[i][j]);
}
}

}
