#include<stdio.h>
# define box printf("\n %c : %c : %c \n...:...:...\n %c : %c : %c \n...:...:...\n %c : %c : %c \n",a[0],a[1],a[2],a[3],a[4],a[5],a[6],a[7],a[8]);
#define wincondition1 a[0]=='x'&&a[0]==a[1]&&a[1]==a[2]||a[3]=='x'&&a[3]==a[4]&&a[4]==a[5]||a[6]=='x'&&a[6]==a[7]&&a[7]==a[8]||a[0]=='x'&&a[0]==a[3]&&a[3]==a[6]||a[1]=='x'&&a[1]==a[4]&&a[4]==a[7]||a[2]=='x'&&a[2]==a[5]&&a[5]==a[8]||a[0]=='x'&&a[0]==a[4]&&a[4]==a[8]||a[2]=='x'&&a[2]==a[4]&&a[4]==a[6]
#define wincondition2 a[0]=='o'&&a[0]==a[1]&&a[1]==a[2]||a[3]=='o'&&a[3]==a[4]&&a[4]==a[5]||a[6]=='o'&&a[6]==a[7]&&a[7]==a[8]||a[0]=='o'&&a[0]==a[3]&&a[3]==a[6]||a[1]=='o'&&a[1]==a[4]&&a[4]==a[7]||a[2]=='o'&&a[2]==a[5]&&a[5]==a[8]||a[0]=='o'&&a[0]==a[4]&&a[4]==a[8]||a[2]=='o'&&a[2]==a[4]&&a[4]==a[6]
void main ()
{

    int n;
l:
    printf("\nenter 1 for single player or enter 2 for double player\n");
    scanf("%d",&n);
    if(n!=1&&n!=2)
    {
        printf("\ninvalid choice\n");
        goto l;
    }
    if(n==2)
    {
        char a[9]= {' ',' ',' ',' ',' ',' ',' ',' ',' '};
        int b,d;
        box;
        for(b=0; b<4; b++)
        {
f:
            printf("\nplayer 1 enter your position\n");
            scanf("%d",&d);
            d=d-1;
            if(d!=1&&d!=2&&d!=3&&d!=0&&d!=4&&d!=5&&d!=6&&d!=7&&d!=8)
            {
                printf("\ninvalid choice\n");
                goto f;
            }
            if(a[d]!=' ')
            {
                printf("\nyou can not choose already filled position\n");
                goto f;
            }
            a[d]='x';
            box;
            if(wincondition1)
            {
                printf("\nplayer 1 wins\n");
                break ;
            }
g:
            printf("\nplayer 2 enter your position\n");
            scanf("%d",&d);
            d=d-1;
            if(d!=1&&d!=2&&d!=3&&d!=0&&d!=4&&d!=5&&d!=6&&d!=7&&d!=8)
            {
                printf("\ninvalid choice\n");
                goto g;
            }
            if(a[d]!=' ')
            {
                printf("you can not choose already filled position");
                goto g;
            }
            a[d]='o';
            box;
            if(wincondition2)
            {
                printf("player 2 wins");
                goto j;
            }
        }
        if(b==4)
        {
            printf("\nmatch draw\n");
            goto j;
        }
    }
    if(n==1)
    {
        char a[9]= {' ',' ',' ',' ',' ',' ',' ',' ',' '};
        int b,m,c=-1,d,e[9]= {10,10,10,10,10,10,10,10,10};
        box;
h:
        c++;
        printf("\nplayer 1 enter your position\n");
        scanf("%d",&d);
        d=d-1;
        if(a[d]!=' ')
        {
            printf("\nyou can not choose already filled position\n");
            goto h;
            c--;
        }
        a[d]='x';
        e[c]=d;
        box;
        if(wincondition1)
        {
            printf("player 1 wins");
            goto j;
        }
        if(((a[0]==a[2]&&a[2]==a[7])&&(a[0]=='o'||a[0]=='x'))||((a[6]==a[8]&&a[8]==a[1])&&(a[6]=='o'||a[6]=='x'))||((a[2]==a[8]&&a[8]==a[3])&&(a[2]=='o'||a[2]=='x'))||((a[0]==a[6]&&a[6]==a[5])&&(a[0]=='o'||a[0]=='x')))
        {
            printf("\nmatch draw\n");
            goto j;
        }
i:
    {
        if(a[4]==' ')
        {
            a[4]='o';
            goto k;
        }

        // to check if there is any possible 3rd place so that the computer can win or the player will win
        {
            if((a[0]==a[1]&&a[2]==' ')&&(a[0]=='x'||a[0]=='o'))
            {
                a[2]='o';
                goto k;
            }
            if((a[0]==a[2]&&a[1]==' ')&&(a[0]=='x'||a[0]=='o'))
            {
                a[1]='o';
                goto k;
            }
            if((a[3]==a[4]&&a[5]==' ')&&(a[3]=='o'||a[3]=='x'))
            {
                a[5]='o';
                goto k;
            }
            if((a[3]==a[5]&&a[4]==' ')&&(a[3]=='o'||a[3]=='x'))
            {
                a[4]='o';
                goto k;
            }
            if((a[6]==a[7]&&a[8]==' ')&&(a[6]=='o'||a[6]=='x'))
            {
                a[8]='o';
                goto k;
            }
            if((a[6]==a[8]&&a[7]==' ')&&(a[6]=='o'||a[6]=='x'))
            {
                a[7]='o';
                goto k;
            }
            if((a[0]==a[3]&&a[6]==' ')&&(a[0]=='o'||a[0]=='x'))
            {
                a[6]='o';
                goto k;
            }
            if((a[0]==a[6]&&a[3]==' ')&&(a[0]=='o'||a[0]=='x'))
            {
                a[3]='o';
                goto k;
            }
            if((a[1]==a[4]&&a[7]==' ')&&(a[1]=='o'||a[1]=='x'))
            {
                a[7]='o';
                goto k;
            }
            if((a[1]==a[7]&&a[4]==' ')&&(a[1]=='o'||a[1]=='x'))
            {
                a[4]='o';
                goto k;
            }
            if((a[2]==a[5]&&a[8]==' ')&&(a[2]=='o'||a[2]=='x'))
            {
                a[8]='o';
                goto k;
            }
            if((a[2]==a[8]&&a[5]==' ')&&(a[2]=='o'||a[2]=='x'))
            {
                a[5]='o';
                goto k;
            }
            if((a[0]==a[4]&&a[8]==' ')&&(a[0]=='o'||a[0]=='x'))
            {
                a[8]='o';
                goto k;
            }
            if((a[0]==a[8]&&a[4]==' ')&&(a[0]=='o'||a[0]=='x'))
            {
                a[4]='o';
                goto k;
            }
            if((a[2]==a[4]&&a[6]==' ')&&(a[2]=='o'||a[2]=='x'))
            {
                a[6]='o';
                goto k;
            }
            if((a[2]==a[6]&&a[4]==' ')&&(a[2]=='o'||a[2]=='x'))
            {
                a[4]='o';
                goto k;
            }
            if((a[1]==a[2]&&a[0]==' ')&&(a[1]=='o'||a[1]=='x'))
            {
                a[0]='o';
                goto k;
            }
            if((a[4]==a[5]&&a[3]==' ')&&(a[4]=='o'||a[4]=='x'))
            {
                a[3]='o';
                goto k;
            }
            if((a[7]==a[8]&&a[6]==' ')&&(a[7]=='o'||a[7]=='x'))
            {
                a[6]='o';
                goto k;
            }
            if((a[3]==a[6]&&a[0]==' ')&&(a[3]=='o'||a[3]=='x'))
            {
                a[0]='o';
                goto k;
            }
            if((a[4]==a[7]&&a[1]==' ')&&(a[4]=='o'||a[4]=='x'))
            {
                a[1]='o';
                goto k;
            }
            if((a[5]==a[8]&&a[2]==' ')&&(a[5]=='o'||a[5]=='x'))
            {
                a[2]='o';
                goto k;
            }
            if((a[4]==a[8]&&a[0]==' ')&&(a[4]=='o'||a[4]=='x'))
            {
                a[0]='o';
                goto k;
            }
            if((a[4]==a[6]&&a[2]==' ')&&(a[4]=='o'||a[4]=='x'))
            {
                a[2]='o';
                goto k;
            }
        }
        // for critical conditions
{
            if((a[0]=='x'||a[0]=='o')&&(a[8]==' '))
            {
                a[8]='o';
                goto k;
            }
            if((a[8]=='x'||a[8]=='o')&&(a[0]==' '))
            {
                a[0]='o';
                goto k;
            }
            if((a[2]=='x'||a[2]=='o')&&(a[6]==' '))
            {
                a[6]='o';
                goto k;
            }
            if((a[6]=='x'||a[6]=='o')&&(a[2]==' '))
            {
                a[2]='o';
                goto k;
            }
        }
        // just for random selection
        {
            if(a[4]==' ')
            {
                a[4]='o';
                goto k;
            }
            if(a[0]==' ')
            {
                a[0]='o';
                goto k;
            }
            if(a[8]==' ')
            {
                a[8]='o';
                goto k;
            }
            if(a[6]==' ')
            {
                a[6]='o';
                goto k;
            }
            if(a[2]==' ')
            {
                a[2]='o';
                goto k;
            }
            if(a[5]==' ')
            {
                a[5]='o';
                goto k;
            }
            if(a[1]==' ')
            {
                a[1]='o';
                goto k;
            }
            if(a[7]==' ')
            {
                a[7]='o';
                goto k;
            }
            if(a[3]==' ')
            {
                a[3]='o';
                goto k;
            }

        }
k:
        box;
        if(wincondition2)
        {
            printf("computer wins");
            goto j;
        }
        if(((a[0]==a[2]&&a[2]==a[7])&&(a[0]=='o'||a[0]=='x'))||((a[6]==a[8]&&a[8]==a[1])&&(a[6]=='o'||a[6]=='x'))||((a[2]==a[8]&&a[8]==a[3])&&(a[2]=='o'||a[2]=='x'))||((a[0]==a[6]&&a[6]==a[5])&&(a[0]=='o'||a[0]=='x')))
        {
            printf("\nmatch draw\n");
            goto j;
        }
        goto h;




j:
        printf("\nend of game");
    }
}
}
