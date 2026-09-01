#include<stdio.h>
double my_atof(const char *);
int main()
{
	char s[20];
	double n;
	printf("enter a string:\n");
	scanf("%[^\n]",s);
	n=my_atof(s);
	printf("%f\n",n);
	return 0;
}
double my_atof(const char *s)
{
	int i,j,flag=0,k=1;
	double n=0,n1=0;
	for(i=0;s[i]==' '||s[i]=='\t';i++);
	if(s[i]=='-'||s[i]=='+')
		j=i+1;
	else
		j=i;
	for(;s[j];j++)
	{
		if(s[j]=='.')
			flag=1;
		else if(s[j]>='0' && s[j]<='9')
		{
			if(flag==0)
				n=n*10+s[j]-'0';
			else
			{
				n1=n1*10+s[j]-'0';
				k=k*10;
			}
		}
		else if(s[j]==' '||s[j]=='\t')
			continue;
		else
			break;
	}
	n=n1/k+n;
	if(s[i]=='-')
		n=-n;
	return n;
}
