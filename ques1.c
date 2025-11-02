#include<stdio.h>
#include<math.h>

int main()

{
    int no,new;
    int rem,arm=0;
    printf("Enter the Number");
    scanf("%d",&no);
    new=no;
    while(no>0)
    {
        rem=no%10;
        arm=(rem*rem*rem)+arm;
        no=no/10;
    }
    if(new==arm)
    {
        printf("The no is armstrong");
    }
    else{
        printf("the no is not armstrong");

    }
    return 0;

}