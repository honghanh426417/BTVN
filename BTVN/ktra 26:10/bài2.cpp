#include<stdio.h>
int isEvenNumber(int number){
  if( number % 2 == 0){
    return 1;
  }
  else{
    return 0;
  }
}
int main(){
    int i,check, n, m;
    printf("Please, enter a number");
    printf("\nm :");
    scanf("%d", &m);
    printf("\nn :");
    scanf("%d", &n);
    printf("\nThe even numbers between %d and %d", m, n);
    for( i = n + 1; i < m; i++){
      check = isEvenNumber(i);
      if(check == 1){
        printf("%d",i);
      }
    }
    return 0;
}
  
