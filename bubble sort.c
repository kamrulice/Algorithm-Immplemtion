 // Email:mdkamrulhasan989@gmail.com //

#include <stdio.h>
int main()

{
    int array[100];
    int i,k,j,n,temp;
    printf("How many element you enter:");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&array[i]);
    }
    for(i=0;i<n-1;i++){
        for(j=i+1;j<n;j++){
            if(array[i]>array[j]){
                temp=array[i];
                array[i]=array[j];
                array[j]=temp;
            }
        }
    }
    for(k=0;k<n;k++)
        printf("%d ",array[k]);
    printf("\n");
    return 0;
}
