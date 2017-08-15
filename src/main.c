/* Contador de palavras
 *
 * Este programa recebera uma serie de caracteres representando palavras em sua
 * entrada. Ao receber um caractere fim de linha ('\n'), deve imprimir na tela o
 * numero de palavras separadas que recebeu e, apos, encerrar.
 */

#include <stdio.h>

int main() {

  char frase[1000];
  int i, a=0, flag=0, total=0, d=0;
  fgets(frase,101,stdin);
  
  for (i=0;frase[i]!= '\0'; i++){
      if (!flag && frase[i]!=' '){
          flag=1;
          total++;
      }
      else if(flag && frase[i]==' '){
          flag=0;
      }
  }
  for (i=0;frase[i]!= '\0'; i++){
    if(frase[i]=='.'){
         a++;
         i++;
         if(a>0 && frase[i]!=' '){
              total++;
              a=0;
         }
    }
  }
 for (i=0;frase[i]!= '\0'; i++){
    if(frase[i]==','){
         d++;
         i++;
         if(d>0 && frase[i]!=' '){
              total++;
              a=0;
         }
    }
 }
 for (i=0;frase[i]!= '\0'; i++){
    if(frase[i]=='-'){
         a++;
         i++;
         if(a>0 && frase[i]!=' '){
               total++;
               a=0;
         }
    }
 }
for (i=0;frase[i]!= '\0'; i++){
    if(frase[i]==' '){
         a++;
         i++;
         if(a>0 && frase[i]=='.'){
              total--;
              a=0;
         }
    }
  }
for (i=0;frase[i]!= '\0'; i++){
    if(frase[i]==' '){
         a++;
         i++;
         if(a>0 && frase[i]==','){
              total--;
              a=0;
         }
    }
  }
for (i=0;frase[i]!= '\0'; i++){
    if(frase[i]==' '){
         a++;
         i++;
         if(a>0 && frase[i]=='-'){
              total--;
              a=0;
         }
    }
  }

  
  printf("%d\n", total);
  return 0;
}
