#include<iostream>
using namespace std;
int main(){
  char kt;
  scanf("%c", &kt);

  if(kt < 'A' && kt > 'Z' && kt < 'a' && kt > 'z' ){
    printf("kt la ky tu khac", kt);
  }
  else{
    switch(kt){ 
    case 'U':
    case 'u':
    case 'E':
    case 'e':
    case 'O':
    case 'o':
    case 'A':
    case 'a':
    case 'I':
    case 'i':
    printf("'%c' la nguyen am!", kt);
    break;
    default:
    printf("'%c' la phu am!", kt);
  }
}
getchar();
}


