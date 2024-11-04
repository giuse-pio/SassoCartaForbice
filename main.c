#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    const int min = 0;
    const int max = 2;
    int sceltaNPC, sceltaGiocatore;
    int vittorieNPC = 0, vittoreGiocatore = 0, pareggio = 0;
    srand(time(NULL));
    printf("inserisci |0| per indicare -Sasso- "
        "|5| per indicare -Carta- "
        "|2| per indicare -Forbici-:\n");
    printf("per smettere di giocare digita |-1|\n");
    do {
        sceltaNPC = rand() % (max - min + 1) + min;
        switch (sceltaNPC) {
            case 0:
                sceltaNPC = 0;
            // sasso
                break;
            case 1:
                sceltaNPC = 2;
            //forbici
                break;
            default:
                sceltaNPC = 5;
            //carta
        }
        printf("digita la tua mossa:\n");
        scanf("%d", &sceltaGiocatore);
        switch (sceltaGiocatore) {
            case 0:
                sceltaGiocatore = 0;
            // sasso
                break;
            case 1:
                sceltaGiocatore = 2;
            //forbici
                break;
            default:
                sceltaGiocatore = 5;
            //carta
        }

        if (sceltaGiocatore == -1) {
            break;
        }
        if (sceltaGiocatore == 0 || sceltaGiocatore == 2 || sceltaGiocatore == 5) {
        } else {
            printf("la mossa inserita non esiste riprova \n");
        }

        if (sceltaGiocatore == 0) {
            if (sceltaNPC == 2) {
                printf("hai vinto! \n");
                printf("la mossa era %d\n", sceltaNPC);
                vittoreGiocatore++;
            } else if (sceltaNPC == 5) {
                printf("hai perso! \n");
                printf("la mossa era %d\n", sceltaNPC);
                vittorieNPC++;
            } else {
                // if (sceltaGiocatore == 0 && sceltaNPC == 0) {
                printf("pareggio! \n");
                printf("la mossa era %d\n", sceltaNPC);
                pareggio++;
            }
        } else if (sceltaGiocatore == 2) {
            if (sceltaNPC == 5) {
                printf("hai vinto! \n");
                printf("la mossa era %d\n", sceltaNPC);
                vittoreGiocatore++;
            } else if (sceltaGiocatore == 2 && sceltaNPC == 0) {
                printf("hai perso! \n");
                printf("la mossa era %d\n", sceltaNPC);
                vittorieNPC++;
            } else {
                //if (sceltaGiocatore == 2 && sceltaNPC == 2) {
                printf("pareggio! \n");
                printf("la mossa era %d\n", sceltaNPC);
                pareggio++;
            }
        } else if (sceltaGiocatore == 5) {
            if (sceltaNPC == 0) {
                printf("hai vinto! \n");
                printf("la mossa era %d\n", sceltaNPC);
                vittoreGiocatore++;
            } else if (sceltaGiocatore == 5 && sceltaNPC == 5) {
                printf("pareggio! \n");
                printf("la mossa era %d\n", sceltaNPC);
                pareggio++;
            } else {
                // if (sceltaGiocatore == 5 && sceltaNPC == 2) {
                printf("hai perso! \n");
                printf("la mossa era %d\n", sceltaNPC);
                vittorieNPC++;
            }
        }
    } while (sceltaGiocatore != -1);
    printf("il giocatore ha vinto %d volte\n", vittoreGiocatore);
    printf("il computer ha vinto %d volte\n", vittorieNPC);
    printf("numero di pareggi %d volte\n", pareggio);
}
