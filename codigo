#include <stdio.h>
#include "biblioteca.h"


int main() {

  float numero, num1, num2, num3, raio, resultado;
  short int escolha;
  float a, b, c;
  float raiz1, raiz2;
  printf("====================================================================================================================\n");
  printf("Bem vindo a calculadora de Valorização Altamente Geometrica Nivelado Exponencialmente Relativo\nV.A.G.N.E.R\n");
  
  while(1){
    printf("====================================================================================================================\n");
    printf("\nQual operação você deseja fazer? \n\n");
    printf("1 - Soma\n");
    printf("2 - Subtração\n");
    printf("3 - Multiplicação\n");
    printf("4 - Divisão\n");
    printf("5 - Número ao quadrado\n");
    printf("6 - Raiz quadrada\n");
    printf("7 - Calcular área triangulo\n");
    printf("8 - Calcular área circulo\n");
    printf("9 - Calcular área quadrado\n");
    printf("10 - Calcular as raizes de uma equação de segundo grau\n");
    printf("11 - Calcular a hipotenusa de um triangulo retangulo\n");
    printf("12 - Sair\n");
    printf("====================================================================================================================\n");
    

    if (scanf("%hi", &escolha) != 1){
      printf("\033[H\033[J");
      printf("\033[31mEntrada inválida! Digite um número válido.\033[0m\n");
      while (getchar() != '\n');
      continue;
    }
    
    switch (escolha) {
      
      case 1:
        printf("\033[H\033[J");
        escolha_numero(&num1, &num2);
        printf("\033[32mResultado: %.2f\033[0m\n",                   calc_somar(num1, num2));
        break;
      
      case 2:
        printf("\033[H\033[J");
        escolha_numero(&num1, &num2);
        printf("\033[32mResultado: %.2f\033[0m\n",                   calc_subtrair(num1, num2));
        break;
      
      case 3:
        printf("\033[H\033[J");
        escolha_numero(&num1, &num2);
        printf("\033[32mResultado: %.2f\033[0m\n",                   calc_multiplicar(num1, num2));
        break;
      
      case 4:
        printf("\033[H\033[J");
        escolha_numero(&num1, &num2);
        printf("\033[32mResultado: %.2f\033[0m\n",                   calc_dividir(num1, num2));
        break;
      
      case 5:
        printf("\033[H\033[J");
        escolha_numero_2(&num3);
        printf("\033[32mResultado: %.2f\033[0m\n",                   calc_quad(num3));
        break;
      
      case 6:
        printf("\033[H\033[J");
        escolha_numero_2(&num3);
        resultado = calc_raiz(num3);
      
        if (resultado == -1.0) {
            printf("\033[33mNão é possível calcular a raiz quadrada de um número negativo.\033[0m\n");
        }
        else {
            printf("\033[32mA raiz quadrada de %.2f é aproximadamente %.5f\033[0m\n", num3, resultado);
        }
        break;
  
      case 7:
        printf("\033[H\033[J");
        escolha_numero_3(&num1, &num2);
      	printf("\033[32mResultado: %.2f\033[0m\n",                   calc_tri(num1, num2));
      	break;
        
      case 8:
        printf("\033[H\033[J");
        escolha_numero_4(&raio);
        printf("\033[32mA área do círculo com raio %.2f é %.2f unidades de medidas\033[0m\n", raio,                            calc_circulo(raio));
        break;
  
      case 9:
        printf("\033[H\033[J");
        escolha_numero_3(&num1, &num2);
        printf("\033[32mResultado: %.2f\033[0m\n",                   calc_quadra(num1, num2));
        break;
  
      case 10:
        printf("\033[H\033[J");
        escolha_bhaskara(&a,&b,&c);
        calcularBhaskara(a, b, c, &raiz1, &raiz2);
        printf("\033[32mResultado: Raiz 1 = %.2f, Raiz 2 = %.2f\033[0m\n", raiz1, raiz2);
        break;

      case 11:
        printf("\033[H\033[J");
        escolha_numero_5(&num1, &num2);
        printf("\033[32mResultado: %.2f\033[0m\n",                   calc_hip(num1, num2));
        break;
      
      case 12:
        printf("Obrigado por utilizar o V.A.G.N.E.R!!!");
        return 0;
      
      default:
        printf("\033[H\033[J");
        printf("\033[31mEntrada inválida! Digite um número válido.\033[0m\n");
        break;
    }
  }
  
  return 0;
}
