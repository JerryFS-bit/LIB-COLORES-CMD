//
// Created by JerryFS-bit on 13/09/2020.
//

#include <windows.h>
#include <iostream>

#ifndef __CTERM_H__
#define __CTERM_H__

using namespace std;

//Prototipo de Funciones
void cprint(const string &Text, const string &ForeGround="blanco", const string &BackGround="null");
void cprintp(const string &Text, int PosX, int PosY, const string &ForeGround="blanco", const string &BackGround="null");

#endif


