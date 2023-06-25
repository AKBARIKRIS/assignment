#include<stdio.h>
#include<conio.h>
void main()
		     //* gross salary *//
{
  int bs,hra,da,ta,gs;
  clrscr();

  printf("\n enter value of bs=");
  scanf("%d",&bs);

  printf("\n enter value of hra=");
  scanf("%d",&hra);

  printf("\n en1ter value of da=");
  scanf("%d",&da);

  printf("\n enter vaue of ta=");
  scanf("%d",&ta);

  hra=(bs*8)/100;
  da=(bs*6)/100;
  ta=(bs*5)/100;
  gs=bs+hra+da+ta;

  printf("\n gross salary of %d",gs);
  getch();
  }