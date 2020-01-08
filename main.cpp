#include "everything.h"

DEBUTPROGRAMME;
	ENTIER(integer, 10); // int integer = 10;
	ENTIER(integer2, 8);
	ENTIER(result, 0);
	result = integer + integer2;
	AFFICHER(integer << "+" << integer2 << "=" << result);
	DECIMAUX(decimal, 0.014);
	DEBUTPOUR(i,10);
		AFFICHER(integer++);
	FINPOUR;
    SAUTDELIGNE;
    PHRASEMARRANTE;
	SAUTDELIGNE;
	PHRASEENCOREPLUSMARRANTE;
    SAUTDELIGNE;
    PHRASEMARRANTEDELAMORTQUITUE;
	TANTQUE(integer2 < 100)
		AFFICHERSURUNELIGNE(integer2++ << " ; " );
		PAUSE(20);
	FINTANTQUE;
	SAUTDELIGNE;
	ENTIER(a, 0);
	AFFICHERSURUNELIGNE("Valeur de a : ");
	PROTECTIONENTREE(a);
	FINTANTQUE;
    AFFICHER("a = " << a);
FINPROGRAMME;
