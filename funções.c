#include <stdio.h>

void escolha_numero(float *num1, float *num2) { 
  // O simbolo "*" na variavel representa um ponteiro e é ele que armazena o endereço de memoria das variaveis.//
    printf("Digite o primeiro numero: ");
    scanf("%f", num1);

    printf("Digite o segundo numero: ");
    scanf("%f", num2);
}


void escolha_numero_2(float *num3) {
    printf("Digite o numero: ");
    scanf("%f", num3);
}



void escolha_numero_3(float *num1, float *num2) {
  printf("Digite o valor correspondente a base do objeto: ");
  scanf("%f", num1);
  
  printf("Digite o valor correspondente a altura do objeto: ");
  scanf("%f", num2);
}



void escolha_numero_4(float *raio) {
  printf("digite o tamanho do raio:");
  scanf("%f",raio);
}


void escolha_bhaskara(float *a, float *b, float *c){
  printf("Digite os coeficientes a, b e c da equação quadrática (ax^2 + bx + c): \n");
  scanf("%f %f %f", a, b, c);
}

void escolha_numero_5(float *num1, float *num2) {
  printf("Digite o primeiro cateto: ");
  scanf("%f", num1);

  printf("Digite o segundo cateto: ");
  scanf("%f", num2);  
}
  

float calc_somar(float num1, float num2) {
  return num1 + num2;
}


float calc_subtrair(float num1, float num2){
  return num1 - num2;
}


float calc_multiplicar(float num1, float num2){
  return num1 * num2;
}


float calc_dividir(float num1, float num2){
  if (num2 != 0){
    return num1 / num2;
  }
  else{
    printf("\033[31mNão é possivel divisão por zero!\033[0m\n");
    return 0;
  }
}


float calc_quad(float num3){
  return num3*num3;
}


float calc_raiz(float num3) {
  /* Método de Newton-Raphson        */
  float resultado;
    if (num3 < 0)
      return -1.0; // Não é possível calcular raiz quadrada de números negativos

  float estimativa = num3;
  float precisao = 0.000001; // Define a precisão desejada

  while ((estimativa * estimativa - num3) > precisao) {
     estimativa = (estimativa + num3/ estimativa) / 2;
  }

  return estimativa;
}


float calc_tri(float num1, float num2){ // a=(b*h)/2
  if (num1 < 0 || num2 < 0){
    printf("\033[31mA medida não pode ser negativa!\033[0m\n");
    return 0;
  }
  else{
    return (num1*num2)/2;
  }
}


float calc_circulo(float raio){
  float area;
  if (raio < 0) {
    printf("\033[31mO raio não pode ser negativo.\033[0m\n");
    return 0;
  } 
  else {
    area = 3.1415 * raio * raio; 
    return area;
  }
}


void calcularBhaskara(float a, float b, float c, float *raiz1, float *raiz2){
  
  float delta = b * b - 4 * a * c;

  if (delta > 0) {
    // Duas raízes reais distintas
    *raiz1 = (-b + calc_raiz(delta)) / (2 * a);
    *raiz2 = (-b - calc_raiz(delta)) / (2 * a);
  } 
  else if (delta == 0) {
    // Duas raízes reais iguais
    *raiz1 = -b / (2 * a);
    *raiz2 = *raiz1;
  }
  else {
    printf("\033[31mDelta negativo!!!\033[0m\n");
    printf("\033[31mAs raizes não estão presentes no conjunto dos reais\033[m\n");
} 
}

float calc_hip(float num1, float num2){
  if (num1 < 0 || num2 < 0){
    printf("\033[31mA medida não pode ser negativa!\033[0m\n");
    return 0;
  }
  else{
    float hip = calc_raiz((num1*num1)+(num2*num2));
    return hip;
  }
}


float calc_quadra(float num1, float num2){
  if (num1 < 0 || num2 < 0){
    printf("\033[31mA medida não pode ser negativa!\033[0m\n");
    return 0;
  }
  else{
    return (num1 * num2);
  }
}
