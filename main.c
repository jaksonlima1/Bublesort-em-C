#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void OrdenarCrescente(int arr[], int t){
    int i, flag, aux;

    flag=1;

    while(flag==1){
        flag=0;
        for(i=0;i<t-1;i++){
            if(arr[i]>arr[i+1]){
                aux = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = aux;
                flag=1;
            }
        }
    }
}

void OrdenarDecrescente(int arr[], int t){
    int i, flag, aux;

    flag=1;

    while(flag==1){
        flag=0;
        for(i=0;i<t-1;i++){
            if(arr[i]<arr[i+1]){
                aux = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = aux;
                flag=1;
            }
        }
    }
}

int main(){
    setlocale(LC_ALL, "Portuguese");

    int i, t;

    printf("============ ORDENADOR DE NÚMEROS INTEIROS ============\n");

    printf("\nQuantos números serão digitados? ");
    scanf("%d", &t);

    int num[t], original[i], crescente[t], decrescente[t];
    printf("\n");
    for (i=0;i<t;i++){
        printf("ITEM\t%d: ", i+1);
        scanf("%d", &num[i]);
        original[i] = num[i];
        crescente[i] = num[i];
        decrescente[i] = num[i];
    }

    OrdenarCrescente(crescente, t);
    OrdenarDecrescente(decrescente, t);

    system("cls");

    printf("Os números digitados foram:\n\n");

    for(i=0;i<t;i++){
        printf("ITEM\t%d: %d\n", i+1, original[i]);
    }

    printf("\nNúmeros em ordem CRESCENTE\n\n");

    for(i=0;i<t;i++){
        printf("ITEM\t%d: %d\n", i+1, crescente[i]);
    }

    printf("\nNúmeros em ordem DECRESCENTE\n\n");

    for(i=0;i<t;i++){
        printf("ITEM\t%d: %d\n", 1+1, decrescente[i]);
    }
    printf("\n");
    system("pause");
    return 0;
}
