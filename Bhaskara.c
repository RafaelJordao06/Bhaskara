#include <stdio.h> // Biblioteca de entrada e saida
#include <stdlib.h> // System pause
#include <math.h> // sqrt
int main (void)
{
    //Declarar as variaveis 
    float a,b,c; //Variavel de entradas
    float x1,x2,x11,x21; // Variavel de saida
    float d; //Delta da equação
    char j; //Para manter a execucao ate teclar 'n'

    //Mensagem para o usuario
    printf("\n#############################################################\n");
    printf("#####  Calcula a raiz de equacao de segundo grau!    ########\n");
    printf("#############################################################\n\n");
    printf("Entrada: coeficiente a, b, c da equacao --- ax*x + b*x + c\n\n");

    //Loop para repetiri
    do
    {
        //Solicita as entradas Opção 1
        printf("Entre com o coenficiente referente a, b e c separandos por espacos (a tem que ser diferente de 0)\n");
        scanf("%f %f %f", &a, &b, &c);
    
        //Calcular o delta
        d = (b*b) - (4*a*c);
    
        printf("\nSua equacao:\n (%.1f)x^2 + (%.1f)x + (%.1f)\n", a, b, c);

        printf("\n\nDelta = (%.1f)^2 - 4 . (%.1f) . (%.1f)\n", b, a,c);
        printf("Delta = %.2f\n\n", d);

        printf("     -(%.1f) +- -/(%.1f) \n", b, d);
        printf("X =  __________________\n");
        printf("          2 . (%.1f)\n\n", a);

        printf("     -(%.1f) +- %.1f \n", b, sqrt(d));
        printf("X =  __________________\n");
        printf("          2 . (%.1f)\n\n", a);
        
        fflush(stdin); //Limpa o Buffer do teclado

        //Calcular raizes 
        x1 = ((-(b)  + sqrt(d)))/(2*(a));

        x2 = ((-(b) - sqrt(d)))/(2*(a));

        printf("x1 = \n");
        printf("   %.2f\n", -(b)  + sqrt(d));
        printf("___________\n");
        printf("   %.2f\n\n", 2*a);
        printf("x2 = \n");
        printf("   %.2f\n", -(b)  - sqrt(d));
        printf("___________\n");
        printf("   %.2f\n", 2*a);

        printf("\nx1 = %.3f", x1);
        printf("\nx2 = %.3f\n", x2);

        //Teste para ver se continua executar
        printf("\nAperte n para encerrar .... qualquer outra tecla para continuar: ");

        fflush(stdin); //Limpa o Buffer do teclado
        
    } while((j=getchar() ) != 'n'); //Parentes em torno de c=getchar() ... primeiro obtem c
    printf("\n\n\n");

    //system ("pause");
    return 0;
} 
