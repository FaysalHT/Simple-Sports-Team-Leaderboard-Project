#include<stdio.h>
#include<windows.h>

struct squad{
    char squadName[100];
    int points;
    int nwin;
    int nlose;
    int ndraw;
};
struct squad team[13];

int squadPrint(int i){
    printf("Name\t Points\t Wins\t Loses\t Draws\t\n");
    printf("%s\t %d\t %d\t %d\t %d\t", team[i].squadName, team[i].points, team[i].nwin, team[i].nlose, team[i].ndraw);
    return 0;
}

int squadNew(int i){
    printf("Enter team name = ");
    scanf("%s", team[i].squadName);
    printf("Enter number of points = ");
    scanf("%d", &team[i].points);
    printf("Enter number of wins = ");
    scanf("%d", &team[i].nwin);
    printf("Enter number of loses = ");
    scanf("%d", &team[i].nlose);
    printf("Enter number of draws = ");
    scanf("%d", &team[i].ndraw);
    return 0;
}

int updateStat(int i){
    int w = 2, d = 1;
    team[i].points=0;
    printf("Enter number of wins = ");
    scanf("%d", &team[i].nwin);
    printf("Enter number of loses = ");
    scanf("%d", &team[i].nlose);
    printf("Enter number of draws = ");
    scanf("%d", &team[i].ndraw);
    team[i].points = team[i].points + ((w*team[i].nwin)+d*team[i].ndraw);
    return 0;
}

int main(){
    int i, userin;
    main_menu:
    system("cls");
    printf("Enter Corresponding number for operation --\n");
    printf("\n<1> Print  Squad  Info \n");
    printf("\n<2> Enter  Squad  Info \n");
    printf("\n<3> Update Squad  Info \n");
    printf("\n<4> Exit\n");
    printf("\nEnter your input = ");
    scanf("%d", &userin);
    switch(userin){
    case 1:
        system("cls");
        printf("Enter team number (1-13) = ");
        scanf("%d", &i);
        squadPrint(i-1);
        user_decision1:
        printf("\nEnter '0' to return\n");
        printf("\nEnter your input = ");
        scanf("%d", &userin);
        if (userin==0){
            goto main_menu;
        }
        else{
            printf("Enter valid input\n");
            Sleep(1000);
            goto user_decision1;
        }
    case 2:
        system("cls");
        printf("Enter team number (1-13) = ");
        scanf("%d", &i);
        squadNew(i-1);
        user_decision2:
        printf("\nEnter '0' to return\n");
        printf("\nEnter your input = ");
        scanf("%d", &userin);
        if (userin==0){
            goto main_menu;
        }
        else{
            printf("Enter valid input\n");
            Sleep(1000);
            goto user_decision2;
        }
    case 3:
        system("cls");
        printf("Enter team number (1-13) = ");
        scanf("%d", &i);
        updateStat(i-1);
        user_decision3:
        printf("\nEnter '0' to return\n");
        printf("\nEnter your input = ");
        scanf("%d", &userin);
        if (userin==0){
            goto main_menu;
        }
        else{
            printf("Enter valid input\n");
            Sleep(1000);
            goto user_decision3;
        }
    case 4:
        system("cls");
        printf("\nThank You\n");
        Sleep(1000);
        return 0;
    default:
            printf("Enter valid input\n");
            Sleep(1000);
            goto main_menu;
    }
}
