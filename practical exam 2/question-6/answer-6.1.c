#include <stdio.h>

void main() {
	int i;
    FILE *fruit_file;
     FILE *color_file;

   
    fruit_file = fopen("fruit.txt", "w");
    color_file = fopen("color.txt", "w");

    if (fruit_file == NULL) {
        printf("Error: unable to create fruit.txt file\n");
        return;
    }
     char *fruit[] = {"Apple", "Banana", "Cherry", "Grape", "Mango"};
    if (color_file == NULL) {
        printf("Error: unable to create color.txt file\n");
        return;
    }
 char *color[] = {"Red", "Yellow", "Pink", "Purple", "Orange"};
   
   

  
    for (i = 0; i < 5; i++) {
        fprintf(fruit_file, "%s:\n", fruit[i]);
        
    }
     for (i = 0; i < 5; i++) {
        fprintf(color_file, "%s:\n",color[i]);
    }

   
    fclose(fruit_file);
    fclose(color_file);


    printf("File created successfully. Fruit and color data written into the file.\n");
}
