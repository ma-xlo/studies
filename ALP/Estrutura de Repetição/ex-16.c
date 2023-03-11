/*Fibonacci series */

                #include<stdio.h>
           main(){               int
         f1=1,                     f2=1,
       f3=0,                         n=10;
     printf                           ("%d ",
    f1);                               printf
   ("%d ",                  f2);        for
  (n;                    (n-2) >0;      n--
 ){f3                   =f1   /**/     +f2;
 printf                 ("%d ",      f3)
 ;f1=                       f2;f2=f3;}

printf("\n");}