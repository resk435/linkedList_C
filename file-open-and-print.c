//Library to open file 
//author: Russell Eskildsen

#include <stdio.h>
#include <stdlib.h>

int main(){

    FILE *fp;
    int c;

    printf("****************\n Start of map: \n****************\n\n");

    fp = fopen("map.txt", "r");
    while(1){
        c = fgetc(fp);
        if(feof(fp)){
            break;
        }
        printf("%c", c);
    }

    fclose(fp);

    return 0;
}



