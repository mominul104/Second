#include<stdio.h>
main()
{
    int n,i,sum,ia[100],a[100];
    ia[0]=0;
    a[0]=0;
    for(i=0;i<20;i++){
        n=rand()%50;
        ia[i+1]=n;
    }
    for(i=0;i<20;i++){
        a[i]=ia[i]+a[i-1];
    }
    printf("Customer No Interarrival_time Arrival Time \n");
    for(i=0;i<20;i++)
        printf("\t%d \t  %d \t\t   %d \n",i,ia[i],a[i]);
}

