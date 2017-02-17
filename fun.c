#include"faro.h"
#include<stdio.h>

int MCD(int a,int b){

int q, r,c,mcd;
 
while ((a%b)=!0){
                 if (a<b){
                          c=b;
                          b=a;
                          a=c;
                         }
                 
                 q=a/b;
                 r=(a-(q*b));
                 a=b;
                 b=r;
                 if(r!=0) mcd=r;
                }
printf("\nl'mcd é: %d\n",mcd);
return mcd;
}

struct dio esteso(int a,int b){
int ao=a,bo=b,r,q;
int qxy[3][100];
int *px=&qxy[0][0],*py=&qxy[1][0],*pq=&qxy[2][0];
int i =0;
struct dio p;
 for(i=0;b>0;i++) {
                      *(pq+i)=a/b,r=a%b;
                      q=*(pq+i);
                      if (i==0)*px=1,*py=0;
                      else if (i==1)*(px+i)=0,*(py+i)=1;
                      else{
                           *(px+i)=*((px+i)-2)- *(pq+i-1)* *(px+i-1);
                           
                           
                           *(py+i)=*(py+i-2)- *(pq+i-1)* *(py+i-1);
                           
                          }
                      
                      p.x = *(px+i);
                      p.y = *(py+i);
                      
                      a=b,b=r;

                     }
    return p;

      

   }

