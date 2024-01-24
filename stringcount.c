#include<stdio.h>
#include<string.h>
int main ()
{
	char s[20];
	int length,i,vowel=0,consonant=0,semicolon=0,comma=0,space=0;
	printf("Enter the string:");
	gets(s);
	length=strlen(s);
	for(i=0;i<length;i++)
	{
	if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
	vowel++;
	else if(s[i]==';')
	semicolon++;
	else if(s[i]==',') 
	comma++; 
	else if(s[i]==' ')
	space++; 
	else consonant++; 
	}
	printf("No. of vowel(s)=%d\n",vowel); 
	printf("No. of semicolon(s)=%d\n",semicolon);
	printf("No. of comma(s)=%d\n",comma);
	printf("No. of space(s)=%d\n",space);
	printf("No. of consonant(a)=%d\n",consonant);
	return 0;
}
