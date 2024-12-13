#include "prodcons.h"

#include <stdio.h>
#include <stdlib.h>
#include <sys/ipc.h>
#include <sys/shm.h>
#include <string.h>
#include <unistd.h>


void inizializza(MonitorStreaming * p) {

    /* TBD: Inizializzare il monitor */
}


void produci(MonitorStreaming * p, char * stringa, size_t lunghezza, key_t chiave) {

    /* TBD: Completare il metodo, con la sincronizzazione */


    printf("Avvio produzione...\n");

    sleep(1);

    char * stringa_shm = /* TBD: Creare una nuova shared memory, su cui copiare la stringa */

    /* TBD */ = lunghezza;
    /* TBD */ = chiave;
    /* TBD */ = getpid();

    strcpy(stringa_shm, stringa);   // Copia della stringa

    printf("Produzione completata: %s (%zu char, key=%x)\n", stringa_shm, lunghezza, chiave);

}

void consuma(MonitorStreaming * p, char * stringa, size_t * lunghezza) {

    /* TBD: Completare il metodo, con la sincronizzazione */


    printf("Avvio consumazione...\n");

    sleep(1);

    key_t chiave = /* TBD */
    pid_t produttore = /* TBD */
    *lunghezza = /* TBD */


    char * stringa_shm = /* TBD: Accedere alla stringa su shared memory */

    strcpy(stringa, stringa_shm);   // Copia della stringa

    printf("Consumazione completata: %s (%zu char, key=%x)\n", stringa, *lunghezza, chiave);

}

void distruggi(MonitorStreaming * p) {

    /* TBD: Completare il metodo */
}