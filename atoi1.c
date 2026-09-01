#include<stdio.h>
int my_atoi(const char *);
int main()
{
	char s[20];
	int n;
	printf("enter string:\n");
	scanf("%[^\n]",s);
	n=my_atoi(s);
	printf("%d\n",n);
	return 0;
}
int my_atoi(const char *s)
{
	int i,j,n=0;
	for(j=0;s[j]==' '|| s[j]=='\t';j++);
	if(s[j]=='-'||s[j]=='+')
		i=j+1;
	else i=j;
	for(;s[i];i++)
	{
		if(s[i]>='0' && s[i]<='9')
			n=n*10+s[i]-'0';
		else if(s[i]==' '||s[i]=='\t')
			continue;
		else
			break;
	}
	if(s[j]=='-')
		n=-n;
	return n;
}
