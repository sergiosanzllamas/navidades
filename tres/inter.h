#ifndef __INTER_H__
#define __INTER_H__
#include "comun.h"
#ifdef __cpp
extern "C"{
#endif
int ganador(char a[N][N]);
void mete(char a[N][N]);
void tablero(char a[N][N]);
void usuario1(char a[N][N]);
void usuario2(char a[N][N]);
void cpu(char a[N][N]);
#ifdef __cpp
}
#endif
#endif
