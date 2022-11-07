
#include <stdio.h>
#include <string.h>
void main()
{
char seq, state, name[30];
int valid=0;
state='A';
printf("enter the string ");
scanf("%s",name);
for (int i=0;i<strlen(name);i++)
{
seq=name[i];

if (state=='A')
{
if (seq=='0')
  {state=='B';}
else if (seq=='1')
  { state=='A';
   valid=0;}
}
else if (state=='B')
{
if (seq=='0'){
  state=='C';}
else if (seq=='1')
   state=='A';
   valid=0;
}
else if (state=='C')
{
if (seq=='0')
  state=='C';
else if (seq=='1')
   state=='D';
   valid=1;
}
else if (state=='D')
{
if (seq=='0')
  state=='C';
else if (seq=='1')
   state=='D';
   valid=1;
}
}
if (valid==1)
{printf("valid String!");
}
else
{printf("invalid String!");
}

}
