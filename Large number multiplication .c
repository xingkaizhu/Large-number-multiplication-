#include<stdio.h>
#include<string.h>
int main()
{   int i,n,m,l,k,j,s;
	char a[100],b[100];
	int d[100],f[100],c[100];
	for(i=0;i<100;i++)
	  c[i]=0;
	scanf("%d",&s);  
	scanf("%s %s",a,b);
	m=strlen(a);
	n=strlen(b);
	for(i=0;i<m;i++)
	d[m-1-i]=a[i]-'0';
	for(j=0;j<n;j++)
	f[n-1-j]=b[j]-'0';
   for(i=0;i<m;i++)	
	for(j=0;j<n;j++)
	  c[i+j]=c[i+j]+d[i]*f[j];
   for(k=0;k<=m+n;k++)	  
	{
		if(c[k]>=10)
		{  
		    c[k+1]=c[k+1]+c[k]/10;	
			c[k]=c[k]%10;
					
		}
	}
for(k=99;c[k]==0;k--)
 	continue;
 for(i=k;i>=0;i--)	
 	printf("%d",c[i]);
	return 0;
}
