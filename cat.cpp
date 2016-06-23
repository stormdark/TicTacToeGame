#include <stdio.h>
#include <windows.h>
#include <conio.h>
#include <time.h>
#include <iostream>
using namespace std;
class cat
{
    private:
 
    public:
        void game();
};
 
void cat::game()
{
    int op, j=1, x;
    char celdas[10];
    srand(time(NULL));
    celdas[1]=0;
    celdas[2]=0;
    celdas[3]=0;
    celdas[4]=0;
    celdas[5]=0;
    celdas[6]=0;
    celdas[7]=0;
    celdas[8]=0;
    celdas[9]=0;
do
{
        if(celdas[1]=='X'&&celdas[2]=='X'&&celdas[3]=='X'||celdas[4]=='X'&&celdas[5]=='X'&&celdas[6]=='X'||celdas[7]=='X'&&celdas[8]=='X'&&celdas[9]=='X'||celdas[1]=='X'&&celdas[4]=='X'&&celdas[7]=='X'||celdas[2]=='X'&&celdas[5]=='X'&&celdas[8]=='X'||celdas[3]=='X'&&celdas[6]=='X'&&celdas[9]=='X'||celdas[1]=='X'&&celdas[5]=='X'&&celdas[9]=='X'||celdas[3]=='X'&&celdas[5]=='X'&&celdas[7]=='X')
     {
            system("cls");
            printf("\n  %c | %c | %c \n",celdas[1], celdas[2], celdas[3] );
            printf("-------------\n");
            printf("  %c | %c | %c \n",celdas[4], celdas[5], celdas[6] );
            printf("-------------\n");
            printf("  %c | %c | %c \n\n",celdas[7], celdas[8], celdas[9] );
            printf("Jugador: X \nMaquina: O\n");
            printf("\nGANASTE!\n\n");
            break;
     }else
     {
         if(celdas[1]=='O'&&celdas[2]=='O'&&celdas[3]=='O'||celdas[4]=='O'&&celdas[5]=='O'&&celdas[6]=='O'||celdas[7]=='O'&&celdas[8]=='O'&&celdas[9]=='O'||celdas[1]=='O'&&celdas[4]=='O'&&celdas[7]=='O'||celdas[2]=='O'&&celdas[5]=='O'&&celdas[8]=='O'||celdas[3]=='O'&&celdas[6]=='O'&&celdas[9]=='O'||celdas[1]=='O'&&celdas[5]=='O'&&celdas[9]=='O'||celdas[3]=='O'&&celdas[5]=='O'&&celdas[7]=='O')
         {
             system("cls");
             printf("\n  %c | %c | %c \n",celdas[1], celdas[2], celdas[3] );
             printf("-------------\n");
             printf("  %c | %c | %c \n",celdas[4], celdas[5], celdas[6] );
             printf("-------------\n");
             printf("  %c | %c | %c \n\n",celdas[7], celdas[8], celdas[9] );
             printf("Jugador: X \nMaquina: O\n");
             printf("\nPERDISTE!\n\n");
             break;
         }else
         {
            do{
            system("cls");
            printf("\n  %c | %c | %c \n",celdas[1], celdas[2], celdas[3] );
            printf("-------------\n");
            printf("  %c | %c | %c \n",celdas[4], celdas[5], celdas[6] );
            printf("-------------\n");
            printf("  %c | %c | %c \n\n",celdas[7], celdas[8], celdas[9] );
            printf("Jugador: X \nMaquina: O\n");
            printf("Ingresa una casilla: ");
            scanf("%d", &op);
        }while(op<1 || op > 9 ||celdas[op]!=0);
        celdas[op]='X';
         }
     }
 
 
  do{
    if(celdas[1]==0||celdas[2]==0||celdas[3]==0||celdas[4]==0||celdas[5]==0||celdas[6]==0||celdas[7]==0||celdas[8]==0||celdas[9]==0)
       {
           x=1+rand()%(10-1);
       }else
       {
           if(celdas[1]=='X'&&celdas[2]=='X'&&celdas[3]=='X'||celdas[4]=='X'&&celdas[5]=='X'&&celdas[6]=='X'||celdas[7]=='X'&&celdas[8]=='X'&&celdas[9]=='X'||celdas[1]=='X'&&celdas[4]=='X'&&celdas[7]=='X'||celdas[2]=='X'&&celdas[5]=='X'&&celdas[8]=='X'||celdas[3]=='X'&&celdas[6]=='X'&&celdas[9]=='X'||celdas[1]=='X'&&celdas[5]=='X'&&celdas[9]=='X'||celdas[3]=='X'&&celdas[5]=='X'&&celdas[7]=='X')
            {
                system("cls");
                printf("\n  %c | %c | %c \n",celdas[1], celdas[2], celdas[3] );
                printf("-------------\n");
                printf("  %c | %c | %c \n",celdas[4], celdas[5], celdas[6] );
                printf("-------------\n");
                printf("  %c | %c | %c \n\n",celdas[7], celdas[8], celdas[9] );
                printf("Jugador: X \nMaquina: O\n");
                printf("\nGANASTE!\n\n");
                break;
            }else
            {
                if(celdas[1]=='O'&&celdas[2]=='O'&&celdas[3]=='O'||celdas[4]=='O'&&celdas[5]=='O'&&celdas[6]=='O'||celdas[7]=='O'&&celdas[8]=='O'&&celdas[9]=='O'||celdas[1]=='O'&&celdas[4]=='O'&&celdas[7]=='O'||celdas[2]=='O'&&celdas[5]=='O'&&celdas[8]=='O'||celdas[3]=='O'&&celdas[6]=='O'&&celdas[9]=='O'||celdas[1]=='O'&&celdas[5]=='O'&&celdas[9]=='O'||celdas[3]=='O'&&celdas[5]=='O'&&celdas[7]=='O')
                    {
                        system("cls");
                        printf("\n  %c | %c | %c \n",celdas[1], celdas[2], celdas[3] );
                        printf("-------------\n");
                        printf("  %c | %c | %c \n",celdas[4], celdas[5], celdas[6] );
                        printf("-------------\n");
                        printf("  %c | %c | %c \n\n",celdas[7], celdas[8], celdas[9] );
                        printf("Jugador: X \nMaquina: O\n");
                        printf("\nPERDISTE!\n\n");
                        break;
                    }else
                    {
                        system("cls");
                        printf("\n  %c | %c | %c \n",celdas[1], celdas[2], celdas[3] );
                        printf("-------------\n");
                        printf("  %c | %c | %c \n",celdas[4], celdas[5], celdas[6] );
                        printf("-------------\n");
                        printf("  %c | %c | %c \n\n",celdas[7], celdas[8], celdas[9] );
                        printf("Jugador: X \nMaquina: O\n");
                        printf("\nEMPATE!\n\n");
                        break;
                    }
            }
       }
  }while(celdas[x]!=0);
 
celdas[x]='O';
}while(celdas[1]==0||celdas[2]==0||celdas[3]==0||celdas[4]==0||celdas[5]==0||celdas[6]==0||celdas[7]==0||celdas[8]==0||celdas[9]==0);
 
}
 
int main()
{
    char rep;
    printf("Juego del Gato \nOrden de las casillas: \n\n");
    printf("  1 | 2 | 3 \n");
    printf("-------------\n");
    printf("  4 | 5 | 6 \n");
    printf("-------------\n");
    printf("  7 | 8 | 9 \n\n");
    printf("Jugador: X \nMaquina: O\n");
    printf("Presione una tecla para iniciar el juego!");
    getch();
    do
    {
        cat obj;
        obj.game();
        printf("Repetir juego? y/n: ");
        cin>>rep;
        rep=tolower(rep);
    }while(rep=='y');
}
