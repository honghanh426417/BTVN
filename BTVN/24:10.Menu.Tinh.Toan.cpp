#include<stdio.h>

int main(){
  int a, b;
  scanf("%d%d", &a, &b);
  int ch;
  
  printf("\t\tTINH TOAN\n");
    printf("==================================\n");
    printf("\n1. Nhap so");
    printf("\n2. Tinh tong");
    printf("\n3. Tinh hieu");
    printf("\n4. Tinh tich");
    printf("\n5. Tinh thuong");
    printf("\n6. Thoat");
    printf("\n==================================");
    printf("\nChon : ");
    scanf("\n %d", &ch);
    switch(ch){
      case 1: {
        printf("\n%d%d", a, b);
      }
      case 2: {
        printf("\n%d",  a + b);
        break;
      }
      case 3: {
        printf("\n%d", a - b);
        break;
      }
      case 4: {
        printf("\n%d", a * b);
        break;
      }
      case 5: {
        printf("\n%d", a / b);
        break;
      }
      case 6:{
        printf("\nThoat");
      }
      
    
    default:
    printf("\nChon sai ");
    break;
    }
    
    
}
  
  