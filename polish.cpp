// Email:mdkamrulhasan989@gmail.com //

#include <bits/stdc++.h>
/*#define MAXSIZE 1000*/
int stk[1000],top;
// To keep an element to the stack
void push (int num)
{
        top = top + 1;
        stk[top] = num;
}
//  Function to delete an element from the stack
int pop ()
{
        top = top - 1;
}
int main()
{
   char str[100],ch;
   int i,j,k,len,r;
   printf("Write the expression : (leave a space after every element)\n");
   gets(str);
   len=strlen(str);
   top=0;
   for(i=0;i<len;i++){
       if(isdigit(str[i]))
        push(str[i]-48);
       else if(str[i]!=' '){
        ch=str[i];
        if(ch=='*')
        r=stk[top]*stk[top-1];
        else if(ch=='/')
            r=stk[top-1]/stk[top];
        else if(ch=='+')
            r=stk[top]+stk[top-1];
        else if(ch=='-')
            r=stk[top-1]-stk[top];
        pop();
        pop();
        push(r);
       }
   }
   printf("The evaluated value is %d\n",stk[top]);
   return 0;
}
