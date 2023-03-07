#include <stdio.h>
#include <string.h>
typedef struct Player_details
{
    int id;
    char name[20];
    int age;
    char game_type;
    union Game_details
    {
        struct Outdoor_games
        {
            int id;
            char name[20];
        } og;
        struct Indoor_games
        {
            int id;
            char name[20];
        } ig;
    } gaming;
} player;
int main()
{
    int i, n;
    player pl[20];
    printf("Enter the no of Players you want to enter: \n");
    scanf("%d", &n);
    printf("\nEnter the Players details\n\n");
    for (int i = 0; i < n; i++)
    {
        printf("Enter the  %d Player ID: ", i + 1);
        scanf("%d", &pl[i].id);
        printf("Enter the  %d Player name: ", i + 1);
        scanf("%s", pl[i].name);
        printf("Enter the  %d Player age: ", i + 1);
        scanf("%d", &pl[i].age);
        printf("You like to register for Indoor or Outdoor:");
        scanf(" %c", &pl[i].game_type);
        if ((pl[i].game_type) == 'I')
        {
            printf("Enter the game code: ");
            scanf("%d", &pl[i].gaming.ig.id);
            printf("Enter the game name: ");
            scanf("%s", pl[i].gaming.ig.name);
        }
        else
        {
            printf("Enter the game code: ");
            scanf("%d", &pl[i].gaming.og.id);
            printf("Enter the game name: ");
            scanf("%s", pl[i].gaming.og.name);
        }
    }
    printf("\n-----PLAYER DETAILS-----\n");

    for (int i = 0; i < n; i++)
    {
        if ((pl[i].game_type) == 'I')
        {
            printf("\n**********INDOOR GAMES**************");
            printf("\nPlayer ID:%d\tName:%s\tAge:%d\tGame Code:%d\tGame Name:%s\n", pl[i].id, pl[i].name, pl[i].age, pl[i].gaming.ig.id, pl[i].gaming.ig.name);
        }
        else
        {
            printf("\n*********OUTDOOR GAMES**************");
            printf("\nPlayer ID:%d\tName:%s\tAge:%d\tGame Code:%d\tGame Name:%s\n", pl[i].id, pl[i].name, pl[i].age, pl[i].gaming.og.id, pl[i].gaming.og.name);
        }
    }
    return 0;
}
