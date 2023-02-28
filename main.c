#include <stdio.h>

int main() {
    int mes;
    printf("Escolha o numero dum mes : ");
    scanf("%d",&mes);
    printf("\n");

    if (mes == 2){
        printf("O mes tem 28 dias!");
        return 0;
    }
    else{
        switch (mes){
            case 1:
            case 3:
            case 5:
            case 7:
            case 8:
            case 10:
            case 12:
                printf("O mes tem 31 dias!");
                break;
            case 4:
            case 6:
            case 9:
            case 11:
                printf("O mes tem 30 dias!");
                break;
            default:
                printf("O numero nao corresponde a um mes!");
                return 0;
        }
    }

}
