#include <stdio.h>

#include <cstdlib>

#include <conio.h>

#include <string.h>

#include <locale.h>

#include <time.h>

const int n=10;

int main()

{

setlocale(LC_ALL, "Russian");

srand(time(NULL));

int k; float sum;

struct Institute{int Room; int room_area; char faculty[3]; int number_residents; int area;} t;

struct Institute tab[n];

int sch;

for (int i=0;i<n;i++)

{

printf("Введите название факультета:\n");

t.Room = i+1;

t.room_area = (6 + rand() % (14 - 6 +1));

t.number_residents = (2 + rand() % (4 - 2 +1));

t.area = t.room_area/t.number_residents;

scanf("%s",&t.faculty);

tab[i]=t;

}

int quantity=0;

char num_fac[n][3];

for (int i=0;i<n;i++)

{

if(strcmp(tab[1].faculty,tab[i].faculty)==0)

{

for(int j=0; num_fac[i][j]; j++)

{

num_fac[i][j]=tab[i].faculty[j];

}

}

else

{

quantity++;

}

}

printf("кол-во факультетов : %d\n",quantity);

for (int i=0;i<n;i++)

{

printf("%d\t%d\t%s\t%d\Примерно:%d\n", tab[i].Room, tab[i].room_area, tab[i].faculty, tab[i].number_residents, tab[i].area);

}

getch();

}
