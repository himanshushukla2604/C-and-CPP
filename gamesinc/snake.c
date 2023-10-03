//jai shree ram
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define KNRM  "\x1B[0m"
#define KRED  "\x1B[31m"
#define KGRN  "\x1B[32m"
#define KYEL  "\x1B[33m"
#define KBLU  "\x1B[34m"
#define KMAG  "\x1B[35m"
#define KCYN  "\x1B[36m"
#define KWHT  "\x1B[37m"
int x,y,gameover,frouteX,frouteY,score,flag,tailx[100],taily[100],counttail=0;
void setdata()
{
    gameover = 0;
    x = 20/2;
    y = 20/2;
    lable1:
    frouteX = rand()%20;
    if(frouteX == 0)
    goto lable1;
    lable2:
    frouteY = rand()%20;
    if(frouteY == 0)
    goto lable2;
    score =0;

}
void draw()
{
    system("cls");
    for (int i = 0; i<=20; i++)
    {
        for (int j = 0 ; j<= 20;j++)
        {
            if (i==0||i==20 || j== 0||j==20)
            {
                printf("%s#",KRED);
            }
            else{
                if(i==x&&j==y)
                {
                   ;
                printf("%s0",KBLU);
                    
                }
                else if(i==frouteX && j == frouteY)
                {
                    printf("%s$",KGRN);
               
                }
                else{
                    int c = 0;
                    for(int l = 0; l< counttail;l++)
                    {
                        if( i == tailx[l] && j == taily[l])
                        {
                            printf("%so",KBLU);
                            c = 1;
                        }
                        
                    }
                    if(c == 0)
                    printf(" ");
                }
            }
            
        }
            printf("\n");
    }
    printf("%sSCORE = %d",KMAG,score);
}
void makelogic()
{
    int prevx = tailx[0];
    int prevy = taily[0];
    int prev2x,prev2y;
    tailx[0] = x;
    taily[0] = y;
    for(int i = 1 ;i<=counttail;i++)
    {
        prev2x = tailx[i];
        prev2y = taily[i];
      
        tailx[i] = prevx;
        taily[i] = prevy;
        prevx = prev2x;
        prevy = prev2y;
    }
    switch(flag)
            {
                case 1:y--;break;
                case 2:x--;break;
                case 3:y++;break;
                case 4:x++;break;
            }
    if(x<0 || y<0 || x>20 || y>20)
    {
        gameover = 1;
    }
    if(x == frouteX && y == frouteY)
    {
        lable3:
        frouteX = rand()%20;
        if(frouteX == 0)
        goto lable3;
        lable4:
        frouteY = rand()%20;
        if(frouteY == 0)
        goto lable4;
        
        score = score + 10;
        counttail++;
    }
    for(int i =0 ;i<counttail;i++)
    {
        if(x==tailx[i] && y==taily[i])
        {
            gameover =1;
        }
    }
}
void input()
{
    if(kbhit()){
        switch(getch()){
            case 'a':flag =1;break;
            case 'w':flag =2;break;
            case 'd':flag =3;break;
            case 's':flag =4;break;
            case 'x':gameover =1;break;
        }
    }
}
int main()
{
setdata();
 system("COLOR FC");
while(!gameover){
draw();
input();
makelogic();
for(int g = 0; g<=1000;g++){
    for(int h = 0 ;h<= 100000;h++);
}
}
return 0;
}