#include<stdio.h>
int tower(int n,char  beg,char end,char aux)
{
    int c1,c2 ;
    if(n==1){
       printf("move disk 1 from %c to %c\n",beg,end);
       return;
    }
    tower(n-1,beg,aux,end) ;
    printf("move disk %d from %c to %c\n",n,beg,end);
    tower(n-1,aux,beg,end)  ;

}
int main()
{
    tower(3,'A','B','C');
    return 0;
}
