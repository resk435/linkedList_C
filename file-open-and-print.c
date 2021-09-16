//Library to open file 
//author: Russell Eskildsen

#include <stdio.h>
#include <stdlib.h>


#include "linkedList.h"


//Function declarations
void loadMap(struct node * nodeArray[NUM_ROWS][NUM_COLUMNS]){};
//End of function declarations 

int main(){

    struct node * map[NUM_ROWS][NUM_COLUMNS];

    printf("\n\n****************\n START OF MAP: \n****************\n\n");
    loadMap(map);

    return 0;
}

void loadMap(struct node * nodeArray[NUM_ROWS][NUM_COLUMNS]){

    FILE *fp;
    int current_node_data; 

    fp = fopen("map.txt", "r");

    //This loads each node structure from the txt file into the array
    for (int i = 0; i < NUM_ROWS; i++){
        for (int j = 0; j < (NUM_COLUMNS+ 1); j++){
            current_node_data = fgetc(fp);
            printf("%c", current_node_data);
            if(feof(fp) || current_node_data == '\n'){break;}
            //We only want the node if it is an actual value on the map so we break for invalid characters
            nodeArray[i][j] = createNewNode(current_node_data); 
        }
    }       

    fclose(fp);
}