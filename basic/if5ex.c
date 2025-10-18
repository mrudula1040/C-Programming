#include<stdio.h>
int main()
{
    /*take  marks of 5 subjects from students ,calculate the total,avg,and percentage and then decide whether the students is pass or fail*/

    int s1,s2,s3,s4,s5;
    int total,avg,percentage;
    printf("subject1:");
    scanf("%d",&s1 );

    printf("subject2:");
    scanf("%d",&s2 );


    printf("subject3:");
    scanf("%d",&s3);

    printf("subject4:");
    scanf("%d",&s4 );

    printf("subject5:");
    scanf("%d",&s5 );
    total=s1+s2+s3+s4+s5;
    printf("total of marks:%d\n",total);

    avg=total/5.0;
    printf("avg of marks:%d\n",avg);

    percentage=(total/500.0)*100;
    printf("percentage of student:%d\n",percentage);
}