#include<stdio.h>

#include<stdlib.h>
void displayDemo();
void displayGameBoard();
void choice(char ch);
void call();
void con1();
void win1();
void con2();
void win2();
void draw();
char max[3][3],mat[3][3],t='a';
char ch;
int r=3,c=3,count=1;
int i,j;

void main()
{

 while(ch!='z')
 {
	displayDemo();
	call();
	getchar();
 }

}
void choice(char ch)
{
       switch(ch)
       {
		case 'a': {
			  if(max[0][0]==0)
			  {
			  if(count%2!=0)
			  {
			  max[0][0]='x';
			  }
			  else
			  {
			  max[0][0]='o';
			  }
			  }
			  else
			  {
			   printf("please try again\n");
			   count++;
			  }
			  break;
			  }
		case 'b': {
			  if(max[0][1]==0)
			  {
			  if(count%2!=0)
			  {
			  max[0][1]='x';
			  }
			  else
			  {
			  max[0][1]='o';
			  }
			  }
			  else
			  {
			   printf("please try again\n");
			   count++;
			  }

			  break;
			  }
		case 'c': {
			  if(max[0][2]==0)
			  {
			  if(count%2!=0)
			  {
			  max[0][2]='x';
			  }
			  else
			  {
			  max[0][2]='o';
			  }
			  }
			  else
			  {
			   printf("please try again\n");
			   count++;
			  }
			  break;
			  }
		case 'd': {
			  if(max[1][0]==0)
			  {
			  if(count%2!=0)
			  {
			  max[1][0]='x';
			  }
			  else
			  {
			  max[1][0]='o';
			  }
			  }
			  else
			  {
			  printf("please try again\n");
			  count++;
			  }
			  break;
			  }
		case 'e': {
			  if(max[1][1]==0)
			  {
			  if(count%2!=0)
			  {
			  max[1][1]='x';
			  }
			  else
			  {
			  max[1][1]='o';
			  }
			  }
			  else
			  {
			  printf("please try again\n");
			  count++;
			  }
			  break;
			  }
		case 'f': {
			  if(max[1][2]==0)
			  {
			  if(count%2!=0)
			  {
			  max[1][2]='x';
			  }
			  else
			  {
			  max[1][2]='o';
			  }
			  }
			  else
			  {
			  printf("please try again\n");
			  count++;
			  }
			  break;
			  }
		case 'g': {
			  if(max[2][0]==0)
			  {
			  if(count%2!=0)
			  {
			  max[2][0]='x';
			  }
			  else
			  {
			  max[2][0]='o';
			  }
			  }
			  else
			  {
			  printf("please try again\n");
			  count++;
			  }
			  break;
			  }
		case 'h': {
			  if(max[2][1]==0)
			  {
			  if(count%2!=0)
			  {
			  max[2][1]='x';
			  }
			  else
			  {
			  max[2][1]='o';
			  }
			  }
			  else
			  {
			  printf("please try again\n");
			  count++;
			  }
			  break;
			  }
		case 'i': {
			  if(max[2][2]==0)
			  {
			  if(count%2!=0)
			  {
			  max[2][2]='x';
			  }
			  else
			  {
			  max[2][2]='o';
			  }
			  }
			  else
			  {
			  printf("please try again\n");
			  count++;
			  }
			  break;
			  }
		case 'z':{break;}
		default :{printf("\nSorry, Wrong Choice Plz.. Try Again...\n");}
       }
       count++;
}

void displayDemo()
{
 
 for(i=0;i<r;i++)
 {
  for(j=0;j<c;j++)
  {
     mat[i][j]=t;
     t++;
     printf(" ");
     printf("%c",mat[i][j]);
   if(j<c-1)
   {
     printf(" |");

   }
   }
   printf("\n");
	if(i<r-1)
	{
		printf("-----------");
		printf("\n");
	}
  }
}
void displayGameBoard()
{
 for(i=0;i<r;i++)
 {
  for(j=0;j<c;j++)
  {
     printf(" ");
     printf("%c",max[i][j]);
   if(j<c-1)
   {
     printf(" |");

   }
   }
   printf("\n");
	if(i<r-1)
	{
		printf("-----------");
		printf("\n");
	}
  }
}
void con1()
{
	if(max[0][0] =='x'&& max[1][1] =='x'&& max[2][2] == 'x')
	{
		win1();
	}
	else if(max[0][2] =='x'&& max[1][1] =='x'&& max[2][0] == 'x')
	{
		win1();
	}
	else if(max[0][0] =='x'&& max[0][1] =='x'&& max[0][2] == 'x')
	{
		win1();
	}
	else if(max[1][0] =='x'&& max[1][1] =='x'&& max[1][2] == 'x')
	{
		win1();
	}
	else if(max[2][0] =='x'&& max[2][1] =='x'&& max[2][2] == 'x')
	{
		win1();
	}
	else if(max[0][0] =='x'&& max[1][0] =='x'&& max[2][0] == 'x')
	{
		win1();
	}
	else if(max[0][1] =='x'&& max[1][1] =='x'&& max[2][1] == 'x')
	{
		win1();
	}
	else if(max[0][2] =='x'&& max[1][2] =='x'&& max[2][2] == 'x')
	{
		win1();
	}
}
void con2()
{
	if(max[0][0] =='o'&& max[1][1] =='o'&& max[2][2] == 'o')
	{
		win2();
	}
	else if(max[0][2] =='o'&& max[1][1] =='o'&& max[2][0] == 'o')
	{
		win2();
	}
	else if(max[0][0] =='o'&& max[0][1] =='o'&& max[0][2] == 'o')
	{
		win2();
	}
	else if(max[1][0] =='o'&& max[1][1] =='o'&& max[1][2] == 'o')
	{
		win2();
	}
	else if(max[2][0] =='o'&& max[2][1] =='o'&& max[2][2] == 'o')
	{
		win2();
	}
	else if(max[0][0] =='o'&& max[1][0] =='o'&& max[2][0] == 'o')
	{
		win2();
	}
	else if(max[0][1] =='o'&& max[1][1] =='o'&& max[2][1] == 'o')
	{
		win2();
	}
	else if(max[0][2] =='o'&& max[1][2] =='o'&& max[2][2] == '0')
	{
		win2();
	}
}

void call()
 {
 printf("\n");
 if(count%2!=0)
 {
 printf("Enter your choie (Player-1):");
 }
 else
 {
 printf("Enter your choie (Player-2):");
 }
 
 scanf("%c",&ch);
 
 printf("\n");
 choice(ch);
 con1();
 con2();
 draw();
 displayGameBoard();
 }
 void win1()
 {
	displayGameBoard();
	printf("Player 1 is Winner...\n");
	printf("press any key to Exit...");
	getchar();
	exit(0);
 }
 void win2()
 {
	displayGameBoard();
	printf("Player 2 is Winner...\n");
	printf("press any key to Exit...");
	getchar();
	exit(0);
 }
 void draw()
 {
	if(max[0][0]!=0 && max[0][1]!=0 && max[0][2]!=0 && max[1][0]!=0 && max[1][1]!=0 && max[1][2]!=0 && max[2][0]!=0 && max[2][1]!=0 && max[2][2]!=0)
	{       displayGameBoard();
		printf("\nGAME DRAW...\n");
		printf("press any key to Exit...");
		getchar();
		exit(0);
	}
}
