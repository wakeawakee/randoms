
// This is the simple game if you dont know about this game here are some simple rules for playing this game
// 1.if you choose snake and computer choose gun gun kills the snake you lose and viceversa
// 2.if you choose water and computer choose snake snake drinks the water you lose and vicecersa
// 3.if you choose gun and computer choose water then gun drwons in the water you lose and viceversa
// ------------------------------------------------------------------------------------------------------------

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int snake(char, char);
int main()
{
    char you, comp;
    printf("Enter 's' for snake 'g' for gun and 'w' for water: ");
    scanf("%c", &you);
    srand(time(0));
    int number = rand() % 100 + 1;
    if (number < 33)
    {
        comp = 's';
    }

    else if (number > 33 && number < 66)
    {
        comp = 'g';
    }
    else
    {
        comp = 'w';
    }

    int result = snake(you, comp);

    printf("you choose %c and computer choose %c\n", you, comp);
    if (result == 0)
    {
        printf("Draw\n");
    }
    else if (result == 1)
    {
        printf("You win\n");
    }
    else

    {

        printf("You lose\n");
    }
}
// rules is that 1 is win -1 is loss and 0 is draw
int snake(char you, char comp)
{
    if (you == comp)
    {
        return 0;
    }

    if (you == 's' && comp == 'g')

    {

        return -1;
    }

    else if (you == 'g' && comp == 's')
    {
        return 1;
    }
    if (you == 's' && comp == 'w')
    {
        return 1;
    }

    else if (you == 'w' && comp == 's')
    {
        return -1;
    }
    if (you == 'w' && comp == 'g')
    {
        return 1;
    }
    else if (you == 'g' && comp == 'w')
    {
        return -1;
    }
}
