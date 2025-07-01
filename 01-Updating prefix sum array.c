#include<stdio.h>
#define MAX 100000

int main(){
    //logic for takig input
    int n;
    scanf("%d",&n);

    //logic for special case
    if(n<1 || n>MAX){
        printf("Invalid input for n\n");
        return 1;
    }
    int array[MAX];

    //logic for taking input
    for(int i=0;i<n;i++){
        scanf("%d",&array[i]);

    }

    //logic for building prefix sum
    int prefix[MAX];
    prefix[0]=array[0];
    for(int i=1;i<n;i++){
        prefix[i]=prefix[i-1]+array[i];

    }

    //logic for taking input
    int value,index;
    scanf("%d %d",&value,&index);

    //logic for taking input
    if(index<0 || index>=n){
        printf("Invalid input\n");
        return 1;
    }
    
    //logic for updating 
    if(array[index]<value){
        int x=value-array[index];
        for(int i=index;i<n;i++){
            prefix[i]=prefix[i]+x;
        }
    }else if(array[index]>value){
        int x=array[index]-value;
        for(int i=index;i<n;i++){
            prefix[i]=prefix[i]-x;
        }
    }

    //logic for update main array
    int oldval=array[index];
    array[index]=value;



    //logic for printing output

    for(int i=0;i<n;i++){
        printf("%d ",prefix[i]);
    }

    printf("\n");

    
    return 0;
}
