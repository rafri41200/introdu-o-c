#include<stdio.h>
#include<math.h>

int main()
{

   int x1,x2,y1,y2;
   float d;

   printf("digite um coordenada x e y no plno cartesiano\n");
   scanf("%d  %d", &x1 , &y1 );

   printf("agora digite outra coordenada com outro x e y\n");
   scanf("%d %d" , &x2 , &y2 );

   d=sqrt(pow(x2-x1,2.0) + pow(y2-y1,2.0));

   printf("a distantia entre os dois pontos is %.2f \n",d);

   return 0;


}