#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    const int min = 0;
    const int max = 2;
    int sceltaNPC, sceltaGiocatore;
    int vittorieNPC = 0, vittoreGiocatore = 0;
    printf("inserisci |0| per indicare -Sasso- "
           "|1| per indicare -Carta- "
           "|2| per indicare -Forbici-:\n");
    printf("per smettere di giocare digita |-1|\n" );
    do {
        srand(time(NULL));
        sceltaNPC = rand() % (max - min + 1) + min;
        switch (sceltaNPC) {
            case 1:
                sceltaNPC = 5;
            //carta
                break;
            case 2:
                sceltaNPC = 2;
            //forbici
                break;
            default:
                sceltaNPC = 0;
            // sasso
        }

        printf("digita la tua mossa:\n");
        scanf("%d", &sceltaGiocatore);
        if (sceltaGiocatore == -1) {
            break;
        }
        if (sceltaGiocatore < min || sceltaGiocatore > max) {
            printf("la mossa inserita non esiste riprova \n");
        }
        if (sceltaGiocatore == 0 && sceltaNPC == 2) {
            printf("hai vinto! \n");
            printf("la mossa era %d\n", sceltaNPC);
            vittoreGiocatore++;
        } else if (sceltaGiocatore == 2 && sceltaNPC == 5) {
            printf("hai vinto! \n");
            printf("la mossa era %d\n", sceltaNPC);
            vittoreGiocatore++;
        } else if (sceltaGiocatore == 1 && sceltaNPC == 0) {
            printf("hai vinto! \n");
            printf("la mossa era %d\n", sceltaNPC);
            vittoreGiocatore++;
        } else {
            printf("hai perso! \n");
            printf("la mossa era %d\n", sceltaNPC);
            vittorieNPC++;
        }
    } while (sceltaGiocatore != -1);
    printf("il giocatore ha vinto %d volte\n", vittoreGiocatore);
    printf("il computer ha vinto %d volte\n", vittorieNPC);
}
