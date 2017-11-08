#include <hellomake.h>
#include <stdio.h>

int main() {
  // call a function in another file
  int flag;
  flag = esPalindromo("ana");
  if (flag == 1)
  {
    printf("Es palindromo!");
  }
  else 
  {
    printf("No es palindromo!");
  }
  return(0);
}
