// Email:mdkamrulhasan989@gmail.com //

#include <stdio.h>
int ackermann(int m,int n)
{
    int c;
    if(m==0)
        return n+1;
    if(m!=0 &&n==0)
        c=ackermann(m-1,1);
    if(m!=0 && n!=0)
        c=ackermann(m-1,ackermann(m,n-1));
    return c;
}
int main()
{
    int m,n,result;
    scanf("%d %d",&m,&n);
    result=ackermann(m,n);
    printf("%d\n",result);
    return 0;
}
