#include <stdio.h>
#include <string.h>

int exit = 1;
int a = 0;
int busca = 0;
int archivo = 0;
char orden[] = "prueba";

int main(void){
    while(exit == 1){
        printf("¿que desea hacer?\n"); 
        scanf("%s", orden);
        if (strcmp(orden, "load archivo") == 0){
            printf("opcion 1\n");
            return 0;
            }
        if (strcmp(orden, "size") == 0){
            printf("opcion 2\n");
            return 0;
        }
        if (strcmp(orden, "range n" ) == 0){
            printf("opcion 3\n");
            a == orden[6];
            return 0;
        }
        if (strcmp(orden, "show n" ) == 0){
            printf("opcion 4\n");
            a == orden[5];
            return 0;
        }
        if (strcmp(orden, "search stat value" ) == 0){
            printf("opcion 5\n");
            busca == 1;
            return 0;
        }
        if (strcmp(orden, "show search" ) == 0){
            printf("opcion 6\n");
            printf (busca);
            return 0;
        }
        if (strcmp(orden, "save name" ) == 0){
            printf("opcion 7\n");
            
            return 0;
        }
        if (strcmp(orden, "exit") == 0){
            exit == 0;
            printf("nos newubn\n");
            return 0;
        }
   }
}