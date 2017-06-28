#include<stdio.h>
#include<conio.h>
#include<math.h>
Struct Time
{
int hours;
int minutes;
int seconds;
};
void difference(Struct Timet1,Struct Timet2,Struct Time*diff)
int main()
{
Struct t1,t2,difference;
printf("Enter the start time : \n");
printf("Enter hours,minutes,seconds : respectively \n");
scanf("%d%d%d",t1.hours,t1.minutes,t1.seconds);
printf("Enter the stop time :  \n");
printf("Enter hours,minutes,seconds : respectively \n");
scanf("%d%d%d",t2.hours,t2.minutes,t2.seconds);
difference(t1,t2,diff);
printf("THE DIFFERENCE IS: \n");
printf("%d%d%d",t1.hours,t1.minutes,t1.seconds);
printf("%d%d%d",t2.hours,t2.minutes,t2.seconds);
printf("=%d%d%d",diff.hours,diff.minutes,diff.seconds);
return 0;
}
void difference(Struct Timet1,Struct Timet2,Struct Time*diff)
{
if(t2.seconds>t1.seconds)
{
--t1.minutes;
t1.seconds+=60;
}
diff=t1.seconds-t2.seconds;
if(t2.seconds>t1.seconds)
{
--t1.hours;
t1.minutes+=60
}
diff->minutes=t1.minutes-t2.minutes;
diff->hours=t1.hours-t2.hours;
}
