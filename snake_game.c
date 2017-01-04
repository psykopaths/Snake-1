#include<stdio.h>
#include<string.h>
#define X 0
#define Y 0
#define N 60
#define M 20
#define tmax 1044


// structure pour le tableau
struct game_board{
int board[M][N];
};
typedef struct game_board game_board;

//structure serpent
struct snake{
int tete_x;
int tete_y;
int tail;
int fruits_manges;
};
typedef struct snake snake;



  void avance(game_board g, snake s){
    start(g,s);
    switch (direction)
        {
        int i=0;
        int z=8, d=4, q=6;
        case z:
            s.tete_y--;
            break;
        case d:
            s.tete_x=s.tete_x-(i+1);
            break;
        case q:
            s.tete_x=s.tete_x+(i+1);
            break;

        }


    }

void start(game_board g, snake s){
int i, j;
// initialisation des murs externes
for(i=0;i<M;i++){
    g.board[i][0]=1;
    g.board[i][59]=1;
}
for(j=0;j<N;j++){
g.board[0][j]=1;
g.board[19][j]=1;
}
// initialisation serpent
s.tete_x=30;
s.tete_y=15;
g.board[15][30]=3;
// affichage des murs avec des caractères ASCII spéciaux
for(i=0;i<M;i++){
    for(j=0;j<N;j++){
        if(g.board[i][j]==1){
            printf("%c",0xDB);
        }else if(g.board[i][j]==0){
            printf("%c",0xFF);
        }else if(g.board[i][j]==3){
            printf("%c",0x5E);
        }
        if(j==59){
            printf("\n");
        }
    }
}
}

int main(){
int i, j;
snake s;
game_board g;
//initialisation du tableau
for(i=0;i<M;i++){
    for(j=0;j<N;j++){
    g.board[i][j]=0;
}
}
start(g,s);
avance(g,s);
return 0;
}

