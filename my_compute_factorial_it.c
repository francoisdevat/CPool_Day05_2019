/*
** EPITECH PROJECT, 2019
** fonction retournant la factoriel
** File description:
** bordel je suis malade ça fait chier 
*/

int my_compute_factorial_it(int nb)
{
    int i = 1;

    if (nb >= 12 || nb < 0) {
        return (0);
    }
    else if (nb == 0 || nb == 1) {
        return (1);
    }    
    while (i <= nb) {
        i *= nb;
        i++;
    }
    return (nb);
}
      
