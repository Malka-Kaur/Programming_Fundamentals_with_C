#include <stdio.h>
int main(){
    int i;
    int h;
    
    for(i=1;i<=7;i++){
      
        for(int h=1;h<=7;h++){
        if(h==1||(i==1&&h==7)||(i==2&&h==6)||(i==3&&h==5)||(i==4&&h==3)||
          (i==7&&h==7)||(i==6&&h==6)||(i==5&&h==5)){
        printf("*");
            }
        else{
            printf(" ");
        }
    }
        
    printf("\n");
}

    return 0;
}