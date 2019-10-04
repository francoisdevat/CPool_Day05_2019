/*
** EPITECH PROJECT, 2019
** fonction retournant la factoriel
** File description:
** bordel je suis malade ça fait chier 
*/

int my_compute_factorial_it(int nb)
{
    int i = 1;

    if (nb >= 12)
    {
        return 0;
    }
    else
    {
        while (i <= nb)
        {
            nb *= i;
            i++;
        }
    return nb;
    }
}
            
   
      
