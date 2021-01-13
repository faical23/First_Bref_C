Projet SAS

Election Pr�sidentielle

Cr�er une application pour �lire un pr�sident apr�s un processus de vote et d'�lection. Sachant que le processus passe par plusieurs tours d'�lection pr�sidentielle.

L'application doit fournir les �tapes suivantes :

Obtention de la liste des pr�sidents nomin�es aux �lections pr�sidentielles(liste dynamique - minimum 5) Obtention de la liste des �lecteurs par leurs identifiant CIN (liste dynamique - minimum 10)

Premier tour : Le premier tour des �lections va consister d�un vote de chaque �lecteurs pour un pr�sident nomin� de choix. Chaque �lecteur va pouvoir choisir un pr�sident nomin� depuis la liste des pr�sidents nomin�s d�j� introduits. Apr�s le processus de vote, le pr�sident ayant un pourcentage de votes moins de 15% sera exclu. N.B: si tous les pr�sidents nomin�s ont un nombre de votes ex aequo, le tour doit �tre refait.

Deuxi�me tour : Le deuxi�me tour des �lections va consister d�un vote de chaque �lecteurs pour un pr�sident nomin� de choix sauf les pr�sidents nomin�s d�j� exclus depuis le premier tour. Chaque �lecteur va pouvoir choisir un pr�sident nomin� depuis la liste des pr�sidents nomin�s qui restent. Apr�s le processus de vote, le pr�sident ayant le moins de votes sera exclu. N.B: si tous les pr�sidents nomin�s ont un nombre de votes ex aequo, le tour doit �tre refait.

Troisi�me tour : Le troisi�me tour des �lections va consister d�un vote de chaque �lecteurs pour un pr�sident nomin� de choix sauf les pr�sidents nomin�s d�j� exclus depuis le deuxi�me tour. Chaque �lecteur va pouvoir choisir un pr�sident nomin� depuis la liste des pr�sidents nomin�s qui restent. Apr�s le processus de vote, le pr�sident ayant le plus de votes sera �lu comme pr�sident. N.B: si deux ou plusieurs pr�sidents nomin�s ont un nombre de votes maximale et ex aequo, le tour doit �tre refait.