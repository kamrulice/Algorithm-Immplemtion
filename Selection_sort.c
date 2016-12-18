#include<stdio.h>
int A[50],n,loc;
int min(int l)
{
    int min,j;
    min=A[l];
    loc=l;
    for(j=l+1;j<=n;j++)
    {
        if(min>A[j])
        {
            min=A[j];
            loc=j;
        }
    }
}


int selection(void)
{
    int k,temp;
    for(k=1;k<=n-1;k++)
    {
        min(k);
        temp=A[k];
        A[k]=A[loc];
        A[loc]=temp;
    }
}

int show(void)
{
    int k;
    printf("\n\n Here is the sorted numbers are: \n");
    for(k=1;k<=n;k++)
    {
        printf("%d\t",A[k]);
    }
}

int main(void)
{
    int k,i;
    printf("\nHow many numbers do you want to sort?: ");
    scanf("%d",&n);
    printf("Enter the numbers are:");

    for(k=1;k<=n;k++)
        scanf("%d",&A[k]);

    int min = 0,m = A[1];
     for(i=2;i<=n;i++){
        if(A[i]<m){
            min =i;
            m = A[i];
        }
    }
    printf("Location of smallest number after 1st step is %d\n",min);
    selection();
    show();
    //return 0;
}
