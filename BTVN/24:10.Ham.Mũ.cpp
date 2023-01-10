//Hàm pow ( hàm tính số mũ)
#include<stdio.h>
#include<math.h>
int main(){
  int a, n, S;
  printf("\nNhap a =");
  scanf("%d", &a);
  printf("\nNhap n =");
  scanf("%d", &n);
  
  S = pow(a,n);
  printf("\nGia tri cua S la = %d", S);
  return 0;
}