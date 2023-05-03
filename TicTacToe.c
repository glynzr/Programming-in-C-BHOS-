#include <stdio.h>
int board[3][3];
void printBoard(){
  printf("~~~~~~~~~~~~\t\n");
 for(int i=0;i<=8;i++){
   if(i%2==0){
     for(int j=0;j<4;j++){
       printf("--\t");
     }
     printf("\n");
   }else{
     if(i==1){
       printf("  | 0 | 1 | 2 |\n");
     }else{
       printf("%i |",(i-1)/2-1);
       for(int k=0;k<3;k++){
         if(board[(i-1)/2-1][k]==-1){
           printf("   |");
          
         }else if(board[(i-1)/2-1][k]==1){
           printf(" X |");
         }else{
           printf(" O |");
         }
       }
       printf("\n");
       
       }
       
     }
   }
  printf("\n");
}



int isEmpty(int a,int b){
  return board[a][b]==-1;
}

int isWin(){
  for(int i=0;i<3;i++){
    if(board[i][0]==board[i][1] && board[i][1]==board[i][2] && board[i][0]!=-1) return 1;
    if(board[0][i]==board[1][i] && board[1][i]==board[2][i] && board[0][i]!=-1) return 1;
  }
  if(board[0][0]==board[1][1]&& board[1][1]==board[2][2] && board[0][0]!=-1){
    return 1;
  }
  if(board[0][2]==board[1][1]&& board[1][1]==board[2][0] && board[2][0]!=-1){
    return 1;
  }  
  return 0;
}
int main(){
  char player1[200],player2[200];
  memset(board,-1,sizeof(board));
  int x,y,count=0;
  printf("\t*****Welcome to TicTacToe game!*****\n");
  
  printf("Player 1:");
  scanf("%s",player1);
  
  printf("Player 2:");
  scanf("%s",player2);
  
  printBoard();
  while(1){
    printf("%s,enter cell coordinates:",player1);
    while(1){
      scanf("%i%i",&x,&y);
      if(isEmpty(x, y)) {board[x][y]=1;break;count++;}
      else{
        printf("Enter empty cell coordinates plz:");
      }
    }
    printBoard();
    if(count==9){
      if(!isWin()){
        printf("No winner\n");
      }else{
        printf("The winner is %s",player1);
      }
      break;
    }else{
      if(isWin()){
        printf("The winner is %s",player1);
        break;
      }
    }

    printf("%s,enter cell coordinates:",player2);
    while(1){
      scanf("%i%i",&x,&y);
      if(isEmpty(x, y)) {board[x][y]=2;break;count++;}
      else{
        printf("Enter empty cell coordinates plz:");
      }
    }
    printBoard();
    if(count==9){
      if(!isWin()){
        printf("No winner\n");
      }else{
        printf("The winner is %s",player2);
      }
      break;
    }else{
      if(isWin()){
        printf("The winner is %s",player2);
        break;
      }
    }
    
  }
  
}
