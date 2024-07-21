/* la commande ci dessous est appelé une entete elle permet grace à l'expression #include
d'accéder à la bibliotheque unistd */
#include <unistd.h>
/* on creer une fonction avec la syntaxe suivante :
 type(void int...) nom de la fonction (arguments que l'on passera à la fonction){ bloc de code que la fonction devra executer}
-void specifie que la fonction ne retournera rien
-ft_putcharc est le nom de la fonction que nous creons on pourrait mettre ici n'importe quel nom
-(char c) char defini le type de donné à enregistrer pour reserver l'espace correspondant dans la memoire,
l’argument c est utilisé pour spécifier quel caractère doit être écrit. 
*/
void  ft_putchar(char c)
{
    write(1, &c, 1);
    /*-entre accolade (nous appelons cela le scop) nous excutons le code de la fonction. Danc ce cas nous execution une fonction write() disponible
dans la bibliotheque unistd.h cette fonction permet de retourner 
le carractere que nous passerons en parametre lors de l'appel de la fonction
voir la documentation de write() a cette adresse http://manpagesfr.free.fr/man/man2/write.2.html
et une video qui peux vous aider a comprendre https://www.youtube.com/watch?v=36-GMy_Capg*/
}


/*int main(){} est la fonction programme quevous êtes obligé d'utiliser pour executer voter code
vous trouverez des explications ici https://www.youtube.com/watch?v=U22CKeUa9Hg*/
int   main(void)
{
    ft_putchar('d');
    /*pour executer notre fonction nous devons l'appeler en lui passant l'argument que l'on veut
    voir afficher dans notre cas j'ai choisi 'd' entre simple '' car il s'agit d'un seul carractere
    noté qu'a la place de 'd' vous pourriez mettre n'importe quel caractere*/
    return (0);  
    /* la fonction main ne retourne rien donc pour finir le programme on indique return(0)*/
}