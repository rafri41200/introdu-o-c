#include<stdio.h>
#include<math.h>

int main(){

   int x,y,z;
   float Mart,Mgeo;

   printf("digite 3 valores\n");
   scanf("%d %d %d", &x , &y , &z);

   Mart = (x*y*z)/3.0;
   Mgeo = pow(x*y*z,0.5);

   printf("a media aritimetica is %.2f e a geometrica is %.2f\n", Mart, Mgeo);

   return 0;

}