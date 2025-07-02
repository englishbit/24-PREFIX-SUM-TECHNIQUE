#include<stdio.h>
#define MAX 100000

//logic for gcd
int gcd(int a,int b){
    if(b==0)return a;


    return gcd(b,a%b);
}

int main(){
    int n;
    scanf("%d",&n);

    //logic for special case
    if(n<1 || n>MAX){
        printf("Invalid input\n");
        return 1;
    }


    //logic for taking input
    int array[n];
    for(int i=0;i<n;i++){
        scanf("%d",&array[i]);
    }



    //logic for building the gcd array
    int gcdarr[n];
    gcdarr[0]=array[0];

    for(int i=1;i<n;i++){
        int x=gcd(gcdarr[i-1],array[i]);
        gcdarr[i]=x;
    }


//logic for taking input
printf("Enter the R\n");
int r;
scanf("%d",&r);


//logic for special case
if(r<1 || r>n){
    printf("Invalid input\n");
    return 1;
}


//logic for output
printf("the gcd from 0 to %d is %d\n",r,gcdarr[r-1]);
















    return 0;
}