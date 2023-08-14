#include <stdio.h>

 void main(){
    float nota1, nota2, nota3, soma; 
    char turno;

    printf("Digite seu tuno: \n");
    scanf("%c", &turno);

    printf("Digite suas notas:\n");
    scanf("%f", &nota1);
    scanf("%f", &nota2);
    scanf("%f", &nota3);
    
    printf("Media:\n");
    soma = (nota1 + nota2 + nota3)/3;
    if(soma >= 7 && soma <= 8){
        soma = soma +1;
    }else if(soma > 8){
        soma = 10;
    }

    printf("Sua media e de %f\n", soma );
    if(turno == 'm'){
        printf("Aluno do turno matutino\n");
    }else if(turno == 'n'){
        printf("Aluno do turno noturno\n");
    }else{
        printf("turno invalido\n");
    }

    if (soma >= 7){
        printf("aprovado!! \n");
    } else {
        printf("reprovado \n");
    }
    return 0;      
}
