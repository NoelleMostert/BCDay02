# BCDay02
We think code bootcamp day02
#include <unistd.h>

int ft_putchar(char c)
{
    write(1, &c, 1);
    return (0);
}
void ft_alphabet(void)
{
    char letter;
    letter = 'z';
    while (letter >= 'a')
    {
        ft_putchar(letter);
        letter--;
    }
}
int main()
{
    ft_alphabet();
    return(0);
}
