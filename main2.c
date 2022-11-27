#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main(void) {
  int aleatorio,jogada;
  char desejo = 's';
  while(desejo == 's' || desejo == 'S'){
  srand((unsigned)time(NULL));
  aleatorio = rand() %5;
  //0 = pedra 1 = papel 2 = tesoura 3 = lagarto 4 = spock
  do{
  printf("digite sua jogada:\n0 = pedra\n1 = papel\n2 = tesoura\n3 = lagarto\n4 = spock\n");
  scanf("%d",&jogada);
    }while(jogada > 4 || jogada < 0);
  if(jogada == 0){
    printf("você jogou pedra!\n");}
  if(jogada == 1){
    printf("você jogou papel!\n");}
  if(jogada == 2){
    printf("você jogou tesoura!\n");}
  if(jogada == 3){
    printf("você jogou lagarto!\n");}
  if(jogada == 4){
    printf("você jogou spock!\n");}
  sleep(2);
  if(aleatorio == 0){
    printf("computador jogou pedra!\n");}
  if(aleatorio == 1){
    printf("computador jogou papel!\n");}
  if(aleatorio == 2){
    printf("computador jogou tesoura!\n");}
  if(aleatorio == 3){
    printf("computador jogou lagarto!\n");}
  if(aleatorio == 4){
    printf("computador jogou spock!\n");}
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
  if(aleatorio == 0 && jogada == 3){
    printf("computador venceu!");
  }
  if(aleatorio == 0 && jogada == 4){
    printf("Player venceu!");
  }
  if(aleatorio == 1 && jogada == 0){
    printf("computador venceu!");
  }
  if(aleatorio == 1 && jogada == 2){
    printf("Player venceu!");
  }
  if(aleatorio == 1 && jogada == 3){
    printf("Player venceu!");
  }
  if(aleatorio == 1 && jogada == 4){
    printf("computador venceu!");
  }
  if(aleatorio == 2 && jogada == 0){
    printf("Player venceu!");
  }
  if(aleatorio == 2 && jogada == 1){
    printf("computador venceu!");
  }
  if(aleatorio == 2 && jogada == 3){
    printf("computador venceu!");
  }
  if(aleatorio == 2 && jogada == 4){
    printf("Player venceu!");
  }
  if(aleatorio == 3 && jogada == 0){
    printf("Player venceu!");
  }
  if(aleatorio == 3 && jogada == 1){
    printf("computador venceu!");
  }
  if(aleatorio == 3 && jogada == 2){
    printf("Player venceu!");
  }
  if(aleatorio == 3 && jogada == 4){
    printf("computador venceu!");
  }
  if(aleatorio == 4 && jogada == 0){
    printf("computador venceu!");
  }
  if(aleatorio == 4 && jogada == 1){
    printf("Player venceu!");
  }
  if(aleatorio == 4 && jogada == 2){
    printf("computador venceu!");
  }
  if(aleatorio == 4 && jogada == 3){
    printf("Player venceu!");
  }
    printf("\ndeseja jogar novamente? s/n\n");
    scanf(" %c",&desejo);
    
    }
  return 0;
}
