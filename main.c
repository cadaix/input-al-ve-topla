#include <stdio.h>

int main() {

  int a,b,c;
  scanf("%d %d %d",&a,&b,&c);  // scanf input almak için d integer & bu ampersant işareti a nın bellekteki yerini belirtir.Yani pointer adresidir.
  printf("Total : %d",a+b+c);  
  getchar(); // iki tane getchar(); kullandık çünkü biri scanf diğeri printf için.
  getchar();  
  return 0;
}