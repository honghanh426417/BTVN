#include<stdio.h>
#include<stdlib.h>
void findTriangle(){
  printf("Dien tich hinh tam giac la: ");
}
void findRectangle(){
  printf("Dien tich hinh chu nhat la: ");
}
void findTrapezoid(){
  printf("Dien tich hinh thang la: ");
}
void findCircle(){
  printf("Dien tich hinh tron la: ");
}


int main(){
  menu();
    return 0;
 }
void menu(){
 int ch;
  while(1){
   printf("\t\tFunction\n");
   printf("\n1. findTriangle");
   printf("\n2. findRectangle");
   printf("\n3. findTrapezoid");
   printf("\n4. findCircle");
   printf("\n5. Exit");
   printf("\nEnter your choice: ");
   scanf("\n %d",&ch);

  switch(ch){
   case 1: findTriangle();
     break;
   case 2: findRectangle();
     break;
   case 3: findTrapezoid();
     break;
   case 4: findCircle();
     break;
   case 5: 
     exit(0);
  }
}