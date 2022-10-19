#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main(void) {
  int aleatorio,jogada;
  srand((unsigned)time(NULL));
  aleatorio = rand() %3;
  //0 = pedra 1 = papel 2 = tesoura
  do{
  printf("digite sua jogada:\n0 = pedra\n1 = papel\n2 = tesoura\n");
  scanf("%d",&jogada);
    }while(jogada > 2 || jogada < 0);
  if(jogada == 0){
    printf("você jogou pedra!\n");}
  if(jogada == 1){
    printf("você jogou papel!\n");}
  if(jogada == 2){
    printf("você jogou tesoura!\n");}
  sleep(2);
  if(aleatorio == 0){
    printf("computador jogou pedra!\n");}
  if(aleatorio == 1){
    printf("computador jogou papel!\n");}
  if(aleatorio == 2){
    printf("computador jogou tesoura!\n");}
  //definir vencedor
  sleep(2);
  if(aleatorio == jogada){
    printf("empate!");
  }
  if(aleatorio == 0 && jogada == 1){
    printf("Player venceu!");
  }
  if(aleatorio == 0 && jogada == 2){
    printf("computador venceu!");
  }
  if(aleatorio == 1 && jogada == 0){
    printf("computador venceu!");
  }
  if(aleatorio == 1 && jogada == 2){
    printf("Player venceu!");
  }
  if(aleatorio == 2 && jogada == 1){
    printf("computador venceu!");
  }
  if(aleatorio == 2 && jogada == 0){
    printf("Player venceu!");
  }
  return 0;
}