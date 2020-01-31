#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    int arr[]={-5,-6,-3,-2,-1};
    int size=sizeof(arr)/sizeof(arr[0]);
    int i,j;
    int sum;
    int max=-32767;
    for(i=0;i<size;i++)
    {
        sum=0;
        for(j=i;j<size;j++)
        {
            sum+=arr[j];
            if(sum>max)
                max=sum;
            if(sum<0)
                sum=0;
        }
    }
    printf("%d",max);
    return 0;
}