/*MADE BY- MAVERICK*/
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<time.h>
int a[3][3],i,j,count,p1score=0,p2score=0,cscore=0;
/*
00 01 02
10 11 12
20 21 22
*/
int checkexist(int a)
{
    if(a==0||a==1)
    return 0;
    else
    return 1;
}
void cemove()
{
    int k,x;
    time_t t;
    A:
    x=1;
    srand((unsigned)time(&t));
    k=(rand()%9)+1;
    for(i=0;i<3;i++)
    for(j=0;j<3;j++)
    {
        if(x++==k)
        {if(checkexist(a[i][j]))
           a[i][j]=0;
         else
         goto A;
        }
    }
}
void cmmove()
{

     for(i=0;i<3;i++)
    if((a[i][0]==a[i][1]) && checkexist(a[i][2]))
    {a[i][2]=0;return;}
    else if((a[i][1]==a[i][2])&&checkexist(a[i][0]))
        {a[i][0]=0;return;}
    else if((a[i][0]==a[i][2])&&checkexist(a[i][1]))
        {a[i][1]=0;return;}

    for(i=0;i<3;i++)
    if((a[0][i]==a[1][i]) && checkexist(a[2][i]))
    {a[2][i]=0;return;}
    else if((a[1][i]==a[2][i])&&checkexist(a[0][i]))
        {a[0][i]=0;return;}
    else if((a[0][i]==a[2][i])&&checkexist(a[1][i]))
        {a[1][i]=0;return;}


    if(((a[0][0]==a[1][1]) && checkexist(a[2][2])))
    {
        a[2][2]=0;
        return;
    }
    else if((a[1][1]==a[2][2]) && checkexist(a[0][0]))
    {
        a[0][0]=0;
        return;
    }
    else if((a[0][0]==a[2][2]) && checkexist(a[1][1]))
    {
        a[1][1]=0;
        return;
    }

    if ((a[2][0]==a[1][1]) && checkexist(a[0][2]))
    {
        a[0][2]=0;
        return;
    }
    else if((a[2][0]==a[0][2])&& checkexist(a[1][1]))
    {
        a[1][1]=0;
        return;
    }
    else if((a[0][2]==a[1][1])&&checkexist(a[2][0]))
    {
        a[2][0]=0;
        return;
    }
        cemove();

}

void chmove()
{
    if(count==1)
    {
        if(checkexist(a[1][1]))
       {a[1][1]=0;return;}
        else
        {a[0][0]=0;return;}
    }

    if(count==3&&a[1][1]==1)
    {
        if(!checkexist(a[1][2]))
        {a[1][0]=0;return;}
        else if(!checkexist(a[2][1]))
        {a[0][1]=0;return;}
        if(!checkexist(a[2][2]))
        {a[2][0]=0;return;}
    }
     for(i=0;i<3;i++)
    if(((a[i][0]==0)&&(a[i][1]==0)) && checkexist(a[i][2]))
    {a[i][2]=0;return;}
    else if((a[i][2]==0&&a[i][1]==0)&&checkexist(a[i][0]))
        {a[i][0]=0;return;}
    else if((a[i][0]==0&&a[i][2]==0)&&checkexist(a[i][1]))
        {a[i][1]=0;return;}

    for(i=0;i<3;i++)
    if((a[0][i]==0&&a[1][i]==0) && checkexist(a[2][i]))
    {a[2][i]=0;return;}
    else if((a[1][i]==0&&a[2][i]==0)&&checkexist(a[0][i]))
        {a[0][i]=0;return;}
    else if((a[0][i]==0&&a[2][i]==0)&&checkexist(a[1][i]))
        {a[1][i]=0;return;}


    if(((a[0][0]==0&&a[1][1]==0) && checkexist(a[2][2])))
    {
        a[2][2]=0;
        return;
    }
    else if((a[1][1]==0&&a[2][2]==0) && checkexist(a[0][0]))
    {
        a[0][0]=0;
        return;
    }
    else if((a[0][0]==0&&a[2][2]==0) && checkexist(a[1][1]))
    {
        a[1][1]=0;
        return;
    }

    if ((a[2][0]==0&&a[1][1]==0) && checkexist(a[0][2]))
    {
        a[0][2]=0;
        return;
    }
    else if((a[2][0]==0&&a[0][2]==0)&& checkexist(a[1][1]))
    {
        a[1][1]=0;
        return;
    }
    else if((a[0][2]==0&&a[1][1]==0)&&checkexist(a[2][0]))
    {
        a[2][0]=0;
        return;
    }

    if(count==3)
    {if(!checkexist(a[0][0]))
    {
        if(!checkexist(a[1][2]))
            {a[2][1]=0;return;}
        else if(!checkexist(a[2][1]))
            {a[1][2]=0;return;}
    }
    else if(!checkexist(a[2][2]))
    {
        if(!checkexist(a[0][1]))
            {a[1][0]=0;return;}
        else if(!checkexist(a[1][0]))
            {a[0][1]=0;return;}
    }
    else if(!checkexist(a[0][2]))
    {
        if(!checkexist(a[1][0]))
            {a[2][1]=0;return;}
        else if(!checkexist(a[2][1]))
            {a[1][0]=0;return;}
    }
    else if(!checkexist(a[2][0]))
    {
        if(!checkexist(a[0][1]))
            {a[1][2]=0;return;}
        else if(!checkexist(a[1][2]))
            {a[0][1]=0;return;}
    }


        if(!checkexist(a[1][0]))
        {if(!checkexist(a[0][1]))
        {a[0][0]=0;return;}
        else if(!checkexist(a[2][1]))
        {a[2][0]=0;return;}
        }

        else if(!checkexist(a[1][2]))
        {if(!checkexist(a[0][1]))
        {a[0][2]=0;return;}
        else if(!checkexist(a[2][1]))
        {a[2][2]=0;return;}
        }

        else if(!checkexist(a[2][1]))
        {if(!checkexist(a[1][0]))
        {a[2][0]=0;return;}
        else if(!checkexist(a[1][2]))
        {a[2][2]=0;return;}
        }

        else if(!checkexist(a[0][1]))
        {if(!checkexist(a[1][0]))
        {a[0][0]=0;return;}
        else if(!checkexist(a[1][2]))
        {a[0][2]=0;return;}
        }
    if((a[0][0]==1&&a[2][2]==1)||(a[2][0]==1&&a[0][2]==1))
    {
        if(checkexist(a[1][2]))
        {a[1][2]=0;return;}
        else if(checkexist(a[2][1]))
        {a[2][1]=0;return;}
    }
    }
        cmmove();

}

void init()
{
    count=0;
    int x=100;
    for(i=0;i<3;i++)
    for(j=0;j<3;j++)
    a[i][j]=x++;
}
void currstat()
{
	printf("BOARD:\n");
    for(i=0;i<3;i++,printf("\n"))
    for(j=0;j<3;j++)
	if(a[i][j]==0)
	printf("_O_|");
	else if(a[i][j]==1)
	printf("_X_|");
	else
	printf("_ _|");
printf("\n");
}
void board()
{ int k=0;
for(i=0;i<3;i++,printf("\n"))
    for(j=0;j<3;j++)
    printf("_%d_|",++k);
}
int checkwin()
{
    int flag=0;
    for(i=0;i<3;i++)
    if((a[i][0]==a[i][1]) && (a[i][1]==a[i][2]))
    {flag=1;break;}

    for(i=0;i<3;i++)
    if((a[0][i]==a[1][i]) && (a[1][i]==a[2][i]))
    {flag=1;break;}

    if(((a[0][0]==a[1][1]) && (a[1][1]==a[2][2]))||((a[2][0]==a[1][1]) && (a[1][1]==a[0][2])))
	flag=1;
	return flag;

}

void p1move()
{
    int k,x=1;

    printf("\nWHERE YOU WANT TO PLAY P1:");
    scanf("%d",&k);
    if(k>0&&k<10)
    for(i=0;i<3;i++)
    for(j=0;j<3;j++)
    {
        if(x++==k)
        {if(checkexist(a[i][j]))
           a[i][j]=1;
         else
         {printf("THAT POSITION IS ALREAY PLAYED");
          p1move();
         }
        }
    }
    else
    {printf("INVALID INPUT!");
        p1move();
    }
}

void p2move()
{
    int k,x=1;

    printf("\nWHERE YOU WANT TO PLAY P2:");
    scanf("%d",&k);
    if((k>0&&k<10))
    for(i=0;i<3;i++)
    for(j=0;j<3;j++)
    {
        if(x++==k)
        {if(checkexist(a[i][j]))
           a[i][j]=0;
         else
         {printf("THAT POSITION IS ALREAY PLAYED");
          p2move();
         }
        }
    }
    else
    {printf("INVALID INPUT!");
        p2move();
    }
}

int mainmenu()
{
    int ch;
    system("cls");
    printf("MENU:\n1.2 PLAYER MODE\n2.EASY COMPUTER\n3.MEDIUM COMPUTER\n4.HARD COMPUTER\n5.EXIT\nENTER YOUR CHOICE:");
    scanf("%d",&ch);
    return ch;
}
void scorekeeper(int ch)
{
    if(ch==1)
    printf("\nPLAYER 1:%d\tPLAYER 2:%d",p1score,p2score);
    else
    printf("\nPLAYER 1:%d\tCOMPUTER:%d",p1score,cscore);
}
int main()
{
    int ch;
    char ch1;
    ch=mainmenu();
    do
    {
    init();
    if(ch==5)
        return 0;
     do
   {
	system("cls");
       currstat();
       board();
       p1move();
       count++;
       if(checkwin())
	{system("cls");currstat();printf("PLAYER 1 WINS\n");p1score++;
	break;
	}
       if(count==9)
       {
           system("cls");
           currstat();
           printf("DRAW!");
           break;
       }
        system("cls");
       currstat();
       if(ch==1)
        {board();p2move();}
       else if(ch==2)
        cemove();
       else if(ch==3)
        cmmove();
       else
       chmove();
       count++;
       if(checkwin()&&ch!=1)
	{system("cls");currstat();printf("COMPUTER WINS\n");cscore++;
	break;}
        if(checkwin()&&ch==1)
	{system("cls");currstat();printf("PLAYER 2 WINS\n");p2score++;
	break;}
   }while(!checkwin());
   scorekeeper(ch);
   printf("\nPLAY AGAIN?(Y/N)");
    }while('y'==getch()||'Y'==getch());
    return 0;
}
