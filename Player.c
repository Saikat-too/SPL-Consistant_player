
#include<stdio.h>
#include<math.h>

struct run
{
    int ar[5];
};

int main()
{


    float sum1=0,sum2=0,sum3=0,sum4=0,sum5=0;
    int i;
    struct run player1,player2,player3,player4,player5;

    for(i=0; i<5;i++)
    {

        scanf("%d",&player1.ar[i]);
    }
    for(i=0;i<5;i++)
    {

        scanf("%d",&player2.ar[i]);
    }
    for(i=0;i<5;i++)
    {

        scanf("%d",&player3.ar[i]);
    }
    for(i=0;i<5;i++)
    {

        scanf("%d",&player4.ar[i]);
    }
    for(i=0;i<5;i++)
    {

        scanf("%d",&player5.ar[i]);
    }
    for(i=0;i<5;i++)
    {
       sum1+=player1.ar[i];
       sum2+=player2.ar[i];
        sum3+=player3.ar[i];
        sum4+=player4.ar[i];
        sum5+=player5.ar[i];





    }
    float co1=sum1/5;
    float co2 = sum2/5;
    float co3 = sum3/5;
    float co4 = sum4/5;
    float co5 = sum5/5;
    sum1 =0,sum2=0,sum3=0,sum4=0,sum5=0;

    for(i=0;i<5;i++)
    {
        sum1+=(player1.ar[i]-co1)*(player1.ar[i]-co1);
        sum2+=(player2.ar[i]-co2)*(player2.ar[i]-co2);
        sum3+=(player3.ar[i]-co3)*(player3.ar[i]-co3);
        sum4+=(player4.ar[i]-co4)*(player4.ar[i]-co4);
        sum5+=(player5.ar[i]-co5)*(player5.ar[i]-co5);


    }

    float sd1=0,sd2=0,sd3=0,sd4=0,sd5=0;

    sd1= sqrt(sum1/5);
     sd2= sqrt(sum2/5);
     sd3=sqrt(sum3/5);
     sd4=sqrt(sum4/5);
     sd5=sqrt(sum5/5);


   float q[5];
   q[0]=sd1;
   q[1]=sd2;
   q[2]=sd3;
   q[3]=sd4;
   q[4]=sd5;
   int j;

    float x  =q[0];
    for(int i = 0;i<5;i++)
    {
        if(x>=q[i])
            {
                 x = q[i];
                j= i+1;
            }
            else
                continue;

    }
    printf("Batsman no %d  is more consistant",j);
return 0;
}
