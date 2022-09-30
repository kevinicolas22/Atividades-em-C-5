#include <stdio.h>

int main() {
  /*1*/
  char produto1[50], produto2[50];
  float valorproduto1, valorproduto2;
  
  printf("Digite o nome do primeiro produto: ");
  scanf("%s", &produto1);
  printf("Informe seu preço: ");
  scanf("%f", &valorproduto1);
  printf("Digite o nome do segundo produto: ");
  scanf("%s", &produto2);
  printf("Informe seu preço: ");
  scanf("%f", &valorproduto2);

  valorproduto1 < valorproduto2 ? printf("Compre o %s ", produto1): printf("Compre o %s ", produto2);

/*2*/
  char produto1[50], produto2[50], produto3[50];
  float valorproduto1, valorproduto2, valorproduto3;
  
  printf("Digite o nome do primeiro produto: ");
  scanf("%s", &produto1);
  printf("Informe seu preço: ");
  scanf("%f", &valorproduto1);
  printf("Digite o nome do segundo produto: ");
  scanf("%s", &produto2);
  printf("Informe seu preço: ");
  scanf("%f", &valorproduto2);
  printf("Digite o nome do terceiro produto: ");
  scanf("%s", &produto3);
  printf("Informe seu preço: ");
  scanf("%f", &valorproduto3);

  if (valorproduto1 > valorproduto2 && valorproduto1 > valorproduto3)
    printf("%s é o produto mais caro", produto1);
  else if (valorproduto2 > valorproduto1 && valorproduto2 > valorproduto3)
    printf("%s é o produto mais caro", produto2);
  else 
    printf("%s é o produto mais caro", produto3);

  /*3*/
  float lado1, lado2, lado3;
  printf("Informe o valor do 1° lado do triângulo ");
  scanf("%f", &lado1);
  printf("Informe o valor do 2° lado do triângulo ");
  scanf("%f", &lado2);
  printf("Informe o valor do 3° lado do triângulo ");
  scanf("%f", &lado3);

  if (lado1 > (lado2 + lado3) || lado2 > lado1 + lado3 || lado3 > lado2 + lado1)
    printf("Não é um triângulo");
  else if (lado1 == lado2 && lado1 == lado3)
    printf("É um triângulo equilátero");
  else if (lado1 == lado2 && lado1 != lado3 && lado2 != lado3 || lado1 == lado3 && lado1 != lado2 && lado3 != lado2||lado2 == lado3 && lado2 != lado1 && lado3 != lado1)
    printf("É um triângulo isósceles");
  else if (lado1 != lado2 && lado1 != lado3 && lado2 != lado3)
    printf("É um triângulo escaleno");
    
/*4*/
  int cont = 0, minusculas = 0, maiusculas = 0;
  char vogal = 'b';
  
  while (cont < 5)
      {
        printf("Digite uma vogal: ");
        scanf("%s", &vogal);
          
        if (vogal == 'a' || vogal == 'e' ||vogal == 'i' ||  vogal == 'o' || vogal == 'u')
        {
          minusculas += 1;
        }
        if (vogal == 'A' || vogal == 'E' || vogal == 'I' || vogal == 'O' || vogal == 'U')
        {
          maiusculas += 1;
        }
        cont+=1;
      }  
  printf("O total de letras minusculas é %d\n: ", minusculas);
  printf("O total de letras maiusculas é %d\n: ", maiusculas);
}