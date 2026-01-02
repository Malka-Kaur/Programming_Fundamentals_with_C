#include <stdio.h>
int main(){
    int i,d;
    int h;
    
    for(i=1;i<=7;i++){
        for(d=1;d<=7;d++){
            if(d==1||d==7||(i==2&&(d==2||d==6))||
            (i==3&&(d==3||d==5))||(i==4&&d==4)){
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