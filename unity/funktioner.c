#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <limits.h>

double multiplicera(double a , double b){
    return (a*b);
}
double aktiv_eff(double u, double i, double cos){
    return multiplicera( multiplicera( u,i ),cos );
}
double sken_3fas(double u, double i){
    return multiplicera( multiplicera( u,i ),sqrt(3) );
}
double aktiv_3fas(double u, double i, double cos){
    return multiplicera( ( multiplicera( u,i ),sqrt(3) ),cos );
}
