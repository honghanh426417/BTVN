#include<stdio.h>
int main(){
  int i, n;
  int giaithua = 1;
  printf("Nhap 1 so bat ky :");
  scanf("%d", &n);
  
  for( i = 1; i <= n; i++){
    giaithua = giaithua * i;
  }
  printf("\nGiai thua cua %d la : %d", n, giaithua);
}
  