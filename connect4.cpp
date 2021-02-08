#include <iostream>
#include <cstdlib>
#include <unistd.h>

int tab[6][7];
int choice, player;
bool end = false;
int a=0;

void check(int x)
{
    if(tab[x-1][a]!=0 && a<6)
    {
        a++;
        check(x);
    }   else if (player==1 && a<6)
            {
            tab[x-1][a]=1;
            a=0;
            }
        else if (player==2 && a<6)
            {
            tab[x-1][a]=2;
            a=0;
            }
        else
        {
        std::cout << "WRONG!" << std::endl;
        a=0;
        player++;
        }
}



int win_check()
{
    for(int i = 0; i<6; i++)
    {
        for(int j = 0; j<7; j++)
        {
        if(tab[j][i]==1 && tab[j+1][i+1]==1 && tab[j+2][i+2]==1 && tab[j+3][i+3]==1)
            {
            end = true;
            std::cout << "\nRED " <<player<< std::endl;
            }
        if(tab[j][i]==1 && tab[j+1][i-1]==1 && tab[j+2][i-2]==1 && tab[j+3][i-3]==1)
            {
            std::cout << "\nRED " <<player<<std::endl;
            end = true;
            }
        if(tab[j][i]==2 && tab[j+1][i-1]==2 && tab[j+2][i-2]==2 && tab[j+3][i-3]==2)
            {
            std::cout << "\nYELLOW " <<player<< std::endl;
            end=true;
            }
        else if(tab[j][i]==2 && tab[j-1][i-1]==2 && tab[j-2][i-2]==2 && tab[j-3][i-3]==2)
            {
            end = true;
            std::cout << "\nYELLOW " <<player<< std::endl;
            }
        else if(tab[j][i]==1 && tab[j][i-1]==1 && tab[j][i-2]==1 && tab[j][i-3]==1)
            {
            std::cout << "\nRED " <<player<< std::endl;
            end = true;
            }
        else if(tab[j][i]==1 && tab[j-1][i]==1 && tab[j-2][i]==1 && tab[j-3][i]==1)
            {
            std::cout << "\nRED " <<player<< std::endl;
            end = true;
            }
        else if(tab[j][i]==2 && tab[j][i-1]==2 && tab[j][i-2]==2 && tab[j][i-3]==2)
            {
            std::cout << "\nYELLOW " <<player<< std::endl;
            end = true;
            }
        else if(tab[j][i]==2 && tab[j-1][i]==2 && tab[j-2][i]==2 && tab[j-3][i]==2)
            {
            std::cout << "\nYELLOW " <<player<< std::endl;
            end = true;
            }
        }
    }
}
int p_choice()
{
    player = 1;
    while(end!=true)
    {
    std::cout <<player;
    std::cin >> choice;
        if (choice>0 && choice<8)
        {
            check(choice);
            if (player == 1)
            {
                player++;
            }
            else
            {
                player--;
            }
        }
    else
        {
    std::cout << "DRAW" << std::endl;
        }
    win_check();
    }
}


int main()
{
    system("clear");
    sleep(1);
    p_choice();
    return 0;
}
