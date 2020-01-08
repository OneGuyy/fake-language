#include <iostream>
#include <windows.h>

#define DEBUTPROGRAMME int main(){
#define ENTIER(n, x) int n = x;
#define AFFICHER(x) std::cout << x << std::endl;
#define AFFICHERSURUNELIGNE(x) std::cout << x;
#define SAUTDELIGNE std::cout << std::endl;
#define DECIMAUX(n, x) double n = x;
#define DEBUTPOUR(a,x) for(int a=0; a<=x; a++){
#define FINPOUR }
#define PAS !
#define TANTQUE(x) while(x){
#define FINTANTQUE }
#define PAUSE(x) Sleep(x);
#define ENTRERVALEUR(n) std::cin >> n;
#define ENTRERCLEAN std::cin.clear(); std::cin.ignore(255,'\n');
#define PHRASEMARRANTE std::cout << "C'est un pingouin xDD" << std::endl;
#define PHRASEENCOREPLUSMARRANTE std::cout << "Tom la pomme ! Ca rime :DDDD" << std::endl;
#define PHRASEMARRANTEDELAMORTQUITUE std::cout << "Qu'est ce qui n'est pas un steak ? Une Porte xDD" << std::endl;
#define PROTECTIONENTREE(x) while(!(std::cin>>x)){ std::cout << "Erreur ! Entree Invalide !" << std::endl; std::cin.clear(); std::cin.ignore(255, '\n');
#define FINPROGRAMME return 0;}
