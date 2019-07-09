#include<stdio.h>
int main()

{
    int i,n;
    for(i=1;i<n;i++)
    scanf("%d",&n);//input nilam
    {
        if((i%3==0)&(i%5==0)){
        printf("FizzBuzz\n");
    }

    else if(i%5==0){
        printf("Buzz\n");
    }
    else if(i%3==0){
        printf("Fizz\n");
    }
    else
    {
        printf("%d\n",i);
    }
}
return 0;
}
//ata akta FizzBuzz er program .
//jkhon 3 dara vag kore vagfol paoa jabe tahole Fizz r  5 dara hole buzz  print korbe ...
//