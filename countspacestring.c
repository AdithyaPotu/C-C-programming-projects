#include<stdio.h>
#include<string.h>
int main()
{
int space_char,tab_char,new_line;
space_char=0;
new_line=0;
tab_char=0;
char ch[50];
char str='f';
int i=0;
printf("\ninput few word: ");
fgets(ch,50,stdin);
int l=strlen(ch);
int j;
printf("\nnumber of blanks , tabs and new line");
while(i<l)
{
if(ch[i]==' ')
{
++space_char;
}
/*if(ch[i]==str)
{
//++tab_char;
ch[i]='*';
}*/
if(ch[i]==str)
{
for(j=i;j<l;j++)
{
ch[j]=j+1;
}
i--;
l--;
}
i++;
}
printf("Blank=%d,\n tab=%d\nnew_line=%d\n",space_char,tab_char,new_line);
printf("%s\n",ch);
}

