int main(){

    char caractere;
    int inteiro;
    float real;


    printf("\nEscolha um numero inteiro\n");
    scanf("%d", & inteiro);

    // colocar um espaco antes do %c resolveu o problema
    printf("Escolha um caractere\n");
    scanf(" %c", & caractere);

    printf("\nEscolha um numero real\n");
    scanf("%f", & real);

    printf("\nO caractere escolhido foi: %c", caractere);
    printf("\nO numero inteiro escolhido foi: %d", inteiro);
    printf("\nO numero real escolhido foi: %f", real);

    return 0;
}