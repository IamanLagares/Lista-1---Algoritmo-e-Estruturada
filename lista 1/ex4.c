#include <stdio.h>
#include <stdlib.h>

int main() {
	
	
	
    int idade;

    printf("Digite a sua idade: ");
    scanf("%d", &idade);

    if(idade < 0) {
    printf("Voc� ainda n�o nasceu!\n");
    } 
    if(idade >= 0 && idade <= 15) {
    printf("Voc� n�o pode votar.\n");
    }
    if(idade >= 16 && idade <= 17) {
    printf("O voto � opcional para voc�.\n");
    }
    if(idade >= 18 && idade <= 65) {
    printf("O voto � obrigat�rio para voc�.\n");
    }
    if(idade == 41) {
    printf("Voc� s� ganha pr�mio, n�o pode votar.\n");
    }
    if(idade > 65 && idade != 88) {
    printf("O voto � opcional para voc�.\n");
    }
    if(idade == 88) {
    printf("Voc� s� ganha pr�mio, n�o pode votar.\n");
    }

    return 0;
}

