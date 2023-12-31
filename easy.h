#ifndef EASY_H_INCLUDED
#define EASY_H_INCLUDED
#include <iostream>

int itc_sqrt(int a);
int itc_skv(int a);
int itc_spr(int a, int b);
int itc_str(int a, int b, int c);
double itc_scir(int a);

int itc_abs(int a);
double itc_fabs(double a);
int itc_revnbr(int a);
bool itc_iseven(int a);

int itc_max(int a, int b);
int itc_min(int a, int b);
double itc_fmax(double a, double b);
double itc_fmin(double a, double b);

void itc_name();
void itc_fio();

double itc_pow(int num, int step);
bool itc_inpositive(int num);
bool itc_inpositive_d(int num);

#endif // EASY_H_INCLUDED
