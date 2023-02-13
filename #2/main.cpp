#include <iostream>  // fichier d'en-tête pour acceder à certaine fonctionnalité, sert à ne pas devoir réecrire du code basique comme : affichage dans le terminal etc...

/*
    std::cout = affichage standart (mise en mémoire tempon / buffer)
    std::cerr = erreurs (affichage direct (Xmémoire temponX))
    std::clog = journalisation (mise en mémoire tempon / buffer)

    std::endl : retour à la ligne (\n) + flush (afficher tout ce qui à été mit dedans et vider la mémoire tempon)
    std::flush (un flush n'est toujour pas utile, pour faire un simple retour à la ligne, privilifié le \n)

    \n = retour à la ligne
    \t = tabulation
    \\ = \

    ; = toujours mettre un ';' à la fin de chaque instruction
*/

int main()  // OBLIGATOIRE : Point d'entrée du programme
{
    std::cout << "Hello World !\n" << "How are you ?\n";  // Afficher un texte suivi d'un retour à la ligne
    std::cout << "Fine and you ?" << std::endl;  // Afficher un texte suivi d'iun 'endl'

    return 0;  // Respecert la norme, la fontion main doit retourner qlq chose
}