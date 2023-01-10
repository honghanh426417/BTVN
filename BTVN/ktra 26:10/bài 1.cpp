#include<stdio.h>
int isEvenNumber(int n){
  //printf("A number to check");
  //scanf("%d", &n);
  if(n <= 0){
    printf("\nKhong tman btoan");
  }
  else{
    if( n % 2 == 0){
      return 1;
     }
    else{
      return 0;
     }
  }
}
int main(){
  int n, check;
  printf("A number to check");
  scanf("%d", &n);
  check = isEvenNumber(i);
  if(check == 1){
    printf("\n%d is a even number", n);
  }
  else{
    printf("\n%d is other number", n);
  }
  return 0;
}
