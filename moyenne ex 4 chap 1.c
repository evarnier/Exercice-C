#include <stdio.h>
main()
{float num;
float som ,note , moy;
som=0;
num=0;
while (note>=0)
{printf ("entrer un nombre");
scanf ("%f" ,&note);
som = som + note;
num= num+1;
}
if (num>0)
{moy = som/num;
printf ("la moyenne est %f",moy);}
}
