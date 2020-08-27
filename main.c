#include <stdio.h>
int main(void) {
  int per;
  float l1,l2,suml,height,Area;
  printf("Enter L1 = ");
  scanf("%f",&l1);
  printf("Enter L2 = ");
  scanf("%f",&l2);
  printf("Enter Height = ");
  scanf("%f",&height);
  per = (l2/l1)*100;
  printf("L2 = %d % \n",per);
  suml = l2+l1;
  if(per>40){
    Area = 0.5*height*suml;
    printf("Area is = %f \n",Area);
  }
  return 0;
}