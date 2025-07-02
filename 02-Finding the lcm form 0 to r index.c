#include<stdio.h>
#define MAX 100000

//logic for gcd
int gcd(int a,int b){
    if(b==0)return a;


    return gcd(b,a%b);
}


//logic for lcm
int lcm(int a ,int b){
    return (a*b)/gcd(a,b);
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



    //logic for building the lcm array
    int lcmarray[n];
    lcmarray[0]=array[0];

    for(int i=1;i<n;i++){
        int x=lcm(lcmarray[i-1],array[i]);
        lcmarray[i]=x;
    }


    //logic for special case
    int r;
    scanf("%d",&r);
    if(r<0 || r>=n){
        printf("Invalid input\n");
        return 1;
    }


    //logic for output
    printf("The lcm from 0 to %d is %d\n",r,lcmarray[r]);


    return 0;
}