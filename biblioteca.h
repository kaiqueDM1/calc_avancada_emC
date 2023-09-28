#ifndef BIBLIOTECA_H // #ifndef = If Not Defined - verifica se um símbolo ou macro não está definido.
#define BIBLIOTECA_H

/* Se "#ifndef" for verdadeira, o codigo "#define" é usada para definir a macro.
Isso cria uma definição que indica que o arquivo de cabeçalho está sendo incluído no arquivo de origem.*/

void calcularBhaskara(float a, float b, float c, float *raiz1, float *raiz2);
void escolha_numero(float *num1, float *num2);
void escolha_numero_2(float *num3);
void escolha_numero_3(float *num1, float *num2);
void escolha_numero_4(float *raio);
void escolha_bhaskara(float *a, float *b, float *c);
void escolha_numero_5(float *num1, float *num2);
float calc_somar(float num1, float num2);
float calc_subtrair(float num1, float num2);
float calc_multiplicar(float num1, float num2);
float calc_dividir(float num1, float num2);
float calc_quad(float num3);
float calc_raiz(float num3);
float calc_tri(float num1, float num2);
float calc_circulo(float raio);
float calc_hip(float num1, float num2);
float calc_quadra(float num1, float num2);

#endif
