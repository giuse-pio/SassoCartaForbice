#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    const int min = 0;
    const int max = 2;
    int sceltaNPC, sceltaGiocatore;
    int vittorieNPC = 0, vittoreGiocatore = 0;
    printf("inserisci |0| per indicare -Sasso- "
        "|5| per indicare -Carta- "
        "|2| per indicare -Forbici-:\n");
    printf("per smettere di giocare digita |-1|\n");
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
        switch (sceltaGiocatore) {
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
        if (sceltaGiocatore == 0 || sceltaGiocatore == 2 || sceltaGiocatore == 5) {
        } else {
            printf("la mossa inserita non esiste riprova \n");
        }
        if (sceltaGiocatore == 0 && sceltaNPC == 2) {
            printf("hai vinto! \n");
            printf("la mossa era %d\n", sceltaNPC);
            vittoreGiocatore++;
        } else if (sceltaGiocatore == 0 && sceltaNPC == 5) {
            printf("hai perso! \n");
            printf("la mossa era %d\n", sceltaNPC);
            vittoreGiocatore++;
        } else if (sceltaGiocatore == 0 && sceltaNPC == 0) {
            printf("pareggio! \n");
            printf("la mossa era %d\n", sceltaNPC);
            vittoreGiocatore++;
        } else if (sceltaGiocatore == 2 && sceltaNPC == 5) {
            printf("hai vinto! \n");
            printf("la mossa era %d\n", sceltaNPC);
            vittoreGiocatore++;
        } else if (sceltaGiocatore == 2 && sceltaNPC == 0) {
            printf("hai perso! \n");
            printf("la mossa era %d\n", sceltaNPC);
            vittoreGiocatore++;
        } else if (sceltaGiocatore == 2 && sceltaNPC == 2) {
            printf("pareggio! \n");
            printf("la mossa era %d\n", sceltaNPC);
            vittoreGiocatore++;
        } else if (sceltaGiocatore == 5 && sceltaNPC == 0) {
            printf("hai vinto! \n");
            printf("la mossa era %d\n", sceltaNPC);
            vittoreGiocatore++;
        } else if (sceltaGiocatore == 5 && sceltaNPC == 5) {
            printf("pareggio! \n");
            printf("la mossa era %d\n", sceltaNPC);
            vittoreGiocatore++;
        } else if (sceltaGiocatore == 5 && sceltaNPC == 2) {
            printf("hai vinto! \n");
            printf("la mossa era %d\n", sceltaNPC);
            vittoreGiocatore++;
        }
    } while (sceltaGiocatore != -1);
    printf("il giocatore ha vinto %d volte\n", vittoreGiocatore);
    printf("il computer ha vinto %d volte\n", vittorieNPC);
}
