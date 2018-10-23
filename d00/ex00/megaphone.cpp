#include <iostream>

void ft_scream (char *s)
{
    while (*s)
    {
        if (*s >= 'a' && *s <= 'z')
            *s -= 32;
        s++;
    }
}

void ft_megaphone(char *s)
{
    ft_scream(s);
    std::cout << s;
}

int main(int ac, char **av)
{
    int i = 1;
    if (ac == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    else
        {
            while (i <= ac)
            {
                ft_megaphone(av[i]);
                i++;
            }
        std::cout << std::endl;
        }
    return (0);
}
