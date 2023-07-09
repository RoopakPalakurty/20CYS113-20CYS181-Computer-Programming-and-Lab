#include <stdio.h>

int main() {
   struct complexnumber {
       int real;
       int img;
   };
   struct complexnumber a,b,c;
   scanf("%d %d",&a.real,&a.img);
   scanf("%d %d",&b.real,&b.img);
   c.real=a.real+b.real;
   c.img=a.img+b.img;
   printf("%d+%di \n",c.real,c.img);
   c.real=a.real-b.real;
   c.img=a.img-b.img;
    printf("%d+%di",c.real,c.img);
    return 0;
}
