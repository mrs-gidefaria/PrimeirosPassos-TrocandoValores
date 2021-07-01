#include <stdio.h>

int main() {
  
  // Declara Variáveis
  
  int a;
  int b;
  a = 7;
  b = 8;
  
  // Imprime na tela
  
  printf ("Antes da troca os paranauê são: %d e %d.\n", a, b);
  
  // Agora vamos baguncar a parada
  
  int aux = a;
  a = b;
  b = aux;
  
  printf ("Depois da troca, os paranauê são: %d e %d.\n", a, b);
  
  printf ("Beijos de luz pra vc");
  
}