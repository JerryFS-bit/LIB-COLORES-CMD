#include "cterm.h"

//
//
//
// COLOR EN TERMINAL
// azul -> rojo verde naranja azul_cielo blanco Morado
// rojo -> azul verde naranja azul_cielo blanco Morado
// verde -> rojo azul naranja azul_cielo blanco Morado
// naranja -> verde rojo azul azul_cielo blanco Morado
// azul_cielo -> naranja verde rojo azul blanco Morado
// blanco -> azul_cielo naranja verde rojo azul Morado
// Morado -> blanco azul_cielo naranja verde rojo azul
//
//
//


void Setposxy(int Pos_X, int Pos_Y){
    HANDLE hCon;
    hCon = GetStdHandle(STD_OUTPUT_HANDLE);
    COORD dwPos;
    dwPos.X = Pos_X;
    dwPos.Y = Pos_Y;
    SetConsoleCursorPosition(hCon, dwPos);
}

void cprint(const string &Text, const string &ForeGround, const string &BackGround) {

    HANDLE color = GetStdHandle(STD_OUTPUT_HANDLE);

    //COLOR AZUL
    if( ForeGround == "azul" and BackGround == "rojo"){
        SetConsoleTextAttribute(color, (FOREGROUND_BLUE | FOREGROUND_INTENSITY | BACKGROUND_RED));
        cout << Text;
    }
    else if( ForeGround == "azul" and BackGround == "verde"){
        SetConsoleTextAttribute(color, (FOREGROUND_BLUE | FOREGROUND_INTENSITY | BACKGROUND_GREEN));
        cout << Text;
    }
    else if( ForeGround == "azul" and BackGround == "naranja"){
        SetConsoleTextAttribute(color, (FOREGROUND_BLUE | FOREGROUND_INTENSITY | BACKGROUND_GREEN | BACKGROUND_RED | BACKGROUND_GREEN));
        cout << Text;
    }
    else if( ForeGround == "azul" and BackGround == "azul cielo"){
        SetConsoleTextAttribute(color, (FOREGROUND_BLUE | FOREGROUND_INTENSITY | BACKGROUND_GREEN | BACKGROUND_BLUE | BACKGROUND_GREEN));
        cout << Text;
    }
    else if( ForeGround == "azul" and BackGround == "blanco"){
        SetConsoleTextAttribute(color, (FOREGROUND_BLUE | FOREGROUND_INTENSITY | BACKGROUND_RED | BACKGROUND_BLUE | BACKGROUND_GREEN));
        cout << Text;
    }
    else if( ForeGround == "azul" and BackGround == "morado"){
        SetConsoleTextAttribute(color, (FOREGROUND_BLUE | FOREGROUND_INTENSITY | BACKGROUND_RED | BACKGROUND_BLUE | BACKGROUND_RED));
        cout << Text;
    }
    else if( ForeGround == "azul" and BackGround == "null"){
        SetConsoleTextAttribute(color, (FOREGROUND_BLUE | FOREGROUND_INTENSITY));
        cout << Text;
    }


    //COLOR ROJO
    if( ForeGround == "rojo" and BackGround == "azul"){
        SetConsoleTextAttribute(color, (FOREGROUND_RED | FOREGROUND_INTENSITY | BACKGROUND_BLUE));
        cout << Text;
    }
    else if( ForeGround == "rojo" and BackGround == "verde"){
        SetConsoleTextAttribute(color, (FOREGROUND_RED | FOREGROUND_INTENSITY | BACKGROUND_GREEN));
        cout << Text;
    }
    else if( ForeGround == "rojo" and BackGround == "naranja"){
        SetConsoleTextAttribute(color, (FOREGROUND_RED | FOREGROUND_INTENSITY | BACKGROUND_GREEN | BACKGROUND_RED | BACKGROUND_GREEN));
        cout << Text;
    }
    else if( ForeGround == "rojo" and BackGround == "azul cielo"){
        SetConsoleTextAttribute(color, (FOREGROUND_RED | FOREGROUND_INTENSITY | BACKGROUND_GREEN | BACKGROUND_BLUE | BACKGROUND_GREEN));
        cout << Text;
    }
    else if( ForeGround == "rojo" and BackGround == "blanco"){
        SetConsoleTextAttribute(color, (FOREGROUND_RED | FOREGROUND_INTENSITY | BACKGROUND_RED | BACKGROUND_BLUE | BACKGROUND_GREEN));
        cout << Text;
    }
    else if( ForeGround == "rojo" and BackGround == "morado"){
        SetConsoleTextAttribute(color, (FOREGROUND_RED | FOREGROUND_INTENSITY | BACKGROUND_RED | BACKGROUND_BLUE | BACKGROUND_RED));
        cout << Text;
    }
    else if( ForeGround == "rojo" and BackGround == "null"){
        SetConsoleTextAttribute(color, (FOREGROUND_RED | FOREGROUND_INTENSITY));
        cout << Text;
    }


    //COLOR VERDE
    if( ForeGround == "verde" and BackGround == "rojo"){
        SetConsoleTextAttribute(color, (FOREGROUND_GREEN | FOREGROUND_INTENSITY | BACKGROUND_RED));
        cout << Text;
    }
    else if( ForeGround == "verde" and BackGround == "azul"){
        SetConsoleTextAttribute(color, (FOREGROUND_GREEN | FOREGROUND_INTENSITY | BACKGROUND_BLUE));
        cout << Text;
    }
    else if( ForeGround == "verde" and BackGround == "naranja"){
        SetConsoleTextAttribute(color, (FOREGROUND_GREEN | FOREGROUND_INTENSITY | BACKGROUND_GREEN | BACKGROUND_RED | BACKGROUND_GREEN));
        cout << Text;
    }
    else if( ForeGround == "verde" and BackGround == "azul cielo"){
        SetConsoleTextAttribute(color, (FOREGROUND_GREEN | FOREGROUND_INTENSITY | BACKGROUND_GREEN | BACKGROUND_BLUE | BACKGROUND_GREEN));
        cout << Text;
    }
    else if( ForeGround == "verde" and BackGround == "blanco"){
        SetConsoleTextAttribute(color, (FOREGROUND_GREEN | FOREGROUND_INTENSITY | BACKGROUND_RED | BACKGROUND_BLUE | BACKGROUND_GREEN));
        cout << Text;
    }
    else if( ForeGround == "verde" and BackGround == "morado"){
        SetConsoleTextAttribute(color, (FOREGROUND_GREEN | FOREGROUND_INTENSITY | BACKGROUND_RED | BACKGROUND_BLUE | BACKGROUND_RED));
        cout << Text;
    }
    else if( ForeGround == "verde" and BackGround == "null"){
        SetConsoleTextAttribute(color, (FOREGROUND_GREEN | FOREGROUND_INTENSITY));
        cout << Text;
    }


    //COLOR NARANJA -> verde rojo azul azul_cielo blanco Morado
    if( ForeGround == "naranja" and BackGround == "verde"){
        SetConsoleTextAttribute(color, (FOREGROUND_GREEN | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_INTENSITY | BACKGROUND_GREEN));
        cout << Text;
    }
    else if( ForeGround == "naranja" and BackGround == "rojo"){
        SetConsoleTextAttribute(color, (FOREGROUND_GREEN | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_INTENSITY | BACKGROUND_RED));
        cout << Text;
    }
    else if( ForeGround == "naranja" and BackGround == "azul"){
        SetConsoleTextAttribute(color, (FOREGROUND_GREEN | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_INTENSITY | BACKGROUND_BLUE));
        cout << Text;
    }
    else if( ForeGround == "naranja" and BackGround == "azul cielo"){
        SetConsoleTextAttribute(color, (FOREGROUND_GREEN | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_INTENSITY | BACKGROUND_GREEN | BACKGROUND_BLUE | BACKGROUND_GREEN));
        cout << Text;
    }
    else if( ForeGround == "naranja" and BackGround == "blanco"){
        SetConsoleTextAttribute(color, (FOREGROUND_GREEN | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_INTENSITY | BACKGROUND_RED | BACKGROUND_BLUE | BACKGROUND_GREEN));
        cout << Text;
    }
    else if( ForeGround == "naranja" and BackGround == "morado"){
        SetConsoleTextAttribute(color, (FOREGROUND_GREEN | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_INTENSITY | BACKGROUND_RED | BACKGROUND_BLUE | BACKGROUND_RED));
        cout << Text;
    }
    else if( ForeGround == "naranja" and BackGround == "null"){
        SetConsoleTextAttribute(color, (FOREGROUND_GREEN | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_INTENSITY));
        cout << Text;
    }


    //COLOR AZUL CIELO -> naranja verde rojo azul blanco Morado
    if( ForeGround == "azul cielo" and BackGround == "verde"){
        SetConsoleTextAttribute(color, (FOREGROUND_GREEN | FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_INTENSITY | BACKGROUND_GREEN));
        cout << Text;
    }
    else if( ForeGround == "azul cielo" and BackGround == "rojo"){
        SetConsoleTextAttribute(color, (FOREGROUND_GREEN | FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_INTENSITY | BACKGROUND_RED));
        cout << Text;
    }
    else if( ForeGround == "azul cielo" and BackGround == "azul"){
        SetConsoleTextAttribute(color, (FOREGROUND_GREEN | FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_INTENSITY | BACKGROUND_BLUE));
        cout << Text;
    }
    else if( ForeGround == "azul cielo" and BackGround == "azul cielo"){
        SetConsoleTextAttribute(color, (FOREGROUND_GREEN | FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_INTENSITY | BACKGROUND_GREEN | BACKGROUND_BLUE | BACKGROUND_GREEN));
        cout << Text;
    }
    else if( ForeGround == "azul cielo" and BackGround == "blanco"){
        SetConsoleTextAttribute(color, (FOREGROUND_GREEN | FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_INTENSITY | BACKGROUND_RED | BACKGROUND_BLUE | BACKGROUND_GREEN));
        cout << Text;
    }
    else if( ForeGround == "azul cielo" and BackGround == "morado"){
        SetConsoleTextAttribute(color, (FOREGROUND_GREEN | FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_INTENSITY | BACKGROUND_RED | BACKGROUND_BLUE | BACKGROUND_RED));
        cout << Text;
    }
    else if( ForeGround == "azul cielo" and BackGround == "null"){
        SetConsoleTextAttribute(color, (FOREGROUND_GREEN | FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_INTENSITY));
        cout << Text;
    }


    //COLOR BLANCO -> azul_cielo naranja verde rojo azul Morado
    if( ForeGround == "blanco" and BackGround == "azul cielo"){
        SetConsoleTextAttribute(color, (FOREGROUND_RED | FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_INTENSITY | BACKGROUND_GREEN | BACKGROUND_BLUE | BACKGROUND_GREEN));
        cout << Text;
    }
    else if( ForeGround == "blanco" and BackGround == "naranja"){
        SetConsoleTextAttribute(color, (FOREGROUND_RED | FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_INTENSITY | BACKGROUND_GREEN | BACKGROUND_RED | BACKGROUND_GREEN));
        cout << Text;
    }
    else if( ForeGround == "blanco" and BackGround == "verde"){
        SetConsoleTextAttribute(color, (FOREGROUND_RED | FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_INTENSITY | BACKGROUND_GREEN));
        cout << Text;
    }
    else if( ForeGround == "blanco" and BackGround == "rojo"){
        SetConsoleTextAttribute(color, (FOREGROUND_RED | FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_INTENSITY | BACKGROUND_RED));
        cout << Text;
    }
    else if( ForeGround == "blanco" and BackGround == "azul"){
        SetConsoleTextAttribute(color, (FOREGROUND_RED | FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_INTENSITY | BACKGROUND_BLUE));
        cout << Text;
    }
    else if( ForeGround == "blanco" and BackGround == "morado"){
        SetConsoleTextAttribute(color, (FOREGROUND_RED | FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_INTENSITY | BACKGROUND_RED | BACKGROUND_BLUE | BACKGROUND_RED));
        cout << Text;
    }
    else if( ForeGround == "blanco" and BackGround == "null"){
        SetConsoleTextAttribute(color, (FOREGROUND_RED | FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_INTENSITY));
        cout << Text;
    }


    //COLOR MORADO -> blanco azul_cielo naranja verde rojo azul
    if( ForeGround == "morado" and BackGround == "blanco"){
        SetConsoleTextAttribute(color, (BACKGROUND_RED | BACKGROUND_BLUE | BACKGROUND_RED | FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_BLUE | FOREGROUND_GREEN));
        cout << Text;
    }
    else if( ForeGround == "morado" and BackGround == "azul cielo"){
        SetConsoleTextAttribute(color, (BACKGROUND_RED | BACKGROUND_BLUE | BACKGROUND_RED | FOREGROUND_INTENSITY | BACKGROUND_GREEN | BACKGROUND_BLUE | BACKGROUND_GREEN));
        cout << Text;
    }
    else if( ForeGround == "morado" and BackGround == "naranja"){
        SetConsoleTextAttribute(color, (BACKGROUND_RED | BACKGROUND_BLUE | BACKGROUND_RED | FOREGROUND_INTENSITY | BACKGROUND_GREEN | BACKGROUND_RED | BACKGROUND_GREEN));
        cout << Text;
    }
    else if( ForeGround == "morado" and BackGround == "verde"){
        SetConsoleTextAttribute(color, (BACKGROUND_RED | BACKGROUND_BLUE | BACKGROUND_RED | FOREGROUND_INTENSITY | BACKGROUND_GREEN));
        cout << Text;
    }
    else if( ForeGround == "morado" and BackGround == "rojo"){
        SetConsoleTextAttribute(color, (BACKGROUND_RED | BACKGROUND_BLUE | BACKGROUND_RED | FOREGROUND_INTENSITY | BACKGROUND_RED));
        cout << Text;
    }
    else if( ForeGround == "morado" and BackGround == "azul"){
        SetConsoleTextAttribute(color, (BACKGROUND_RED | BACKGROUND_BLUE | BACKGROUND_RED | FOREGROUND_INTENSITY | BACKGROUND_BLUE));
        cout << Text;
    }
    else if( ForeGround == "morado" and BackGround == "null"){
        SetConsoleTextAttribute(color, (BACKGROUND_RED | BACKGROUND_BLUE | BACKGROUND_RED | FOREGROUND_INTENSITY));
        cout << Text;
    }
}

[[maybe_unused]] void cprintp(const string &Text, int PosX, int PosY, const string &ForeGround, const string &BackGround){

    HANDLE color = GetStdHandle(STD_OUTPUT_HANDLE);

    //COLOR AZUL
    if( ForeGround == "azul" and BackGround == "rojo"){
        SetConsoleTextAttribute(color, (FOREGROUND_BLUE | FOREGROUND_INTENSITY | BACKGROUND_RED));
        Setposxy(PosX,PosY);    cout << Text;
    }
    else if( ForeGround == "azul" and BackGround == "verde"){
        SetConsoleTextAttribute(color, (FOREGROUND_BLUE | FOREGROUND_INTENSITY | BACKGROUND_GREEN));
        Setposxy(PosX,PosY);    cout << Text;
    }
    else if( ForeGround == "azul" and BackGround == "naranja"){
        SetConsoleTextAttribute(color, (FOREGROUND_BLUE | FOREGROUND_INTENSITY | BACKGROUND_GREEN | BACKGROUND_RED | BACKGROUND_GREEN));
        Setposxy(PosX,PosY);    cout << Text;
    }
    else if( ForeGround == "azul" and BackGround == "azul cielo"){
        SetConsoleTextAttribute(color, (FOREGROUND_BLUE | FOREGROUND_INTENSITY | BACKGROUND_GREEN | BACKGROUND_BLUE | BACKGROUND_GREEN));
        Setposxy(PosX,PosY);    cout << Text;
    }
    else if( ForeGround == "azul" and BackGround == "blanco"){
        SetConsoleTextAttribute(color, (FOREGROUND_BLUE | FOREGROUND_INTENSITY | BACKGROUND_RED | BACKGROUND_BLUE | BACKGROUND_GREEN));
        Setposxy(PosX,PosY);    cout << Text;
    }
    else if( ForeGround == "azul" and BackGround == "morado"){
        SetConsoleTextAttribute(color, (FOREGROUND_BLUE | FOREGROUND_INTENSITY | BACKGROUND_RED | BACKGROUND_BLUE | BACKGROUND_RED));
        Setposxy(PosX,PosY);    cout << Text;
    }
    else if( ForeGround == "azul" and BackGround == "null"){
        SetConsoleTextAttribute(color, (FOREGROUND_BLUE | FOREGROUND_INTENSITY));
        Setposxy(PosX,PosY);    cout << Text;
    }


    //COLOR ROJO
    if( ForeGround == "rojo" and BackGround == "azul"){
        SetConsoleTextAttribute(color, (FOREGROUND_RED | FOREGROUND_INTENSITY | BACKGROUND_BLUE));
        Setposxy(PosX,PosY);    cout << Text;
    }
    else if( ForeGround == "rojo" and BackGround == "verde"){
        SetConsoleTextAttribute(color, (FOREGROUND_RED | FOREGROUND_INTENSITY | BACKGROUND_GREEN));
        Setposxy(PosX,PosY);    cout << Text;
    }
    else if( ForeGround == "rojo" and BackGround == "naranja"){
        SetConsoleTextAttribute(color, (FOREGROUND_RED | FOREGROUND_INTENSITY | BACKGROUND_GREEN | BACKGROUND_RED | BACKGROUND_GREEN));
        Setposxy(PosX,PosY);    cout << Text;
    }
    else if( ForeGround == "rojo" and BackGround == "azul cielo"){
        SetConsoleTextAttribute(color, (FOREGROUND_RED | FOREGROUND_INTENSITY | BACKGROUND_GREEN | BACKGROUND_BLUE | BACKGROUND_GREEN));
        Setposxy(PosX,PosY);    cout << Text;
    }
    else if( ForeGround == "rojo" and BackGround == "blanco"){
        SetConsoleTextAttribute(color, (FOREGROUND_RED | FOREGROUND_INTENSITY | BACKGROUND_RED | BACKGROUND_BLUE | BACKGROUND_GREEN));
        Setposxy(PosX,PosY);    cout << Text;
    }
    else if( ForeGround == "rojo" and BackGround == "morado"){
        SetConsoleTextAttribute(color, (FOREGROUND_RED | FOREGROUND_INTENSITY | BACKGROUND_RED | BACKGROUND_BLUE | BACKGROUND_RED));
        Setposxy(PosX,PosY);    cout << Text;
    }
    else if( ForeGround == "rojo" and BackGround == "null"){
        SetConsoleTextAttribute(color, (FOREGROUND_RED | FOREGROUND_INTENSITY));
        Setposxy(PosX,PosY);    cout << Text;
    }


    //COLOR VERDE
    if( ForeGround == "verde" and BackGround == "rojo"){
        SetConsoleTextAttribute(color, (FOREGROUND_GREEN | FOREGROUND_INTENSITY | BACKGROUND_RED));
        Setposxy(PosX,PosY);    cout << Text;
    }
    else if( ForeGround == "verde" and BackGround == "azul"){
        SetConsoleTextAttribute(color, (FOREGROUND_GREEN | FOREGROUND_INTENSITY | BACKGROUND_BLUE));
        Setposxy(PosX,PosY);    cout << Text;
    }
    else if( ForeGround == "verde" and BackGround == "naranja"){
        SetConsoleTextAttribute(color, (FOREGROUND_GREEN | FOREGROUND_INTENSITY | BACKGROUND_GREEN | BACKGROUND_RED | BACKGROUND_GREEN));
        Setposxy(PosX,PosY);    cout << Text;
    }
    else if( ForeGround == "verde" and BackGround == "azul cielo"){
        SetConsoleTextAttribute(color, (FOREGROUND_GREEN | FOREGROUND_INTENSITY | BACKGROUND_GREEN | BACKGROUND_BLUE | BACKGROUND_GREEN));
        Setposxy(PosX,PosY);    cout << Text;
    }
    else if( ForeGround == "verde" and BackGround == "blanco"){
        SetConsoleTextAttribute(color, (FOREGROUND_GREEN | FOREGROUND_INTENSITY | BACKGROUND_RED | BACKGROUND_BLUE | BACKGROUND_GREEN));
        Setposxy(PosX,PosY);    cout << Text;
    }
    else if( ForeGround == "verde" and BackGround == "morado"){
        SetConsoleTextAttribute(color, (FOREGROUND_GREEN | FOREGROUND_INTENSITY | BACKGROUND_RED | BACKGROUND_BLUE | BACKGROUND_RED));
        Setposxy(PosX,PosY);    cout << Text;
    }
    else if( ForeGround == "verde" and BackGround == "null"){
        SetConsoleTextAttribute(color, (FOREGROUND_GREEN | FOREGROUND_INTENSITY));
        Setposxy(PosX,PosY);    cout << Text;
    }


    //COLOR NARANJA -> verde rojo azul azul_cielo blanco Morado
    if( ForeGround == "naranja" and BackGround == "verde"){
        SetConsoleTextAttribute(color, (FOREGROUND_GREEN | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_INTENSITY | BACKGROUND_GREEN));
        Setposxy(PosX,PosY);    cout << Text;
    }
    else if( ForeGround == "naranja" and BackGround == "rojo"){
        SetConsoleTextAttribute(color, (FOREGROUND_GREEN | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_INTENSITY | BACKGROUND_RED));
        Setposxy(PosX,PosY);    cout << Text;
    }
    else if( ForeGround == "naranja" and BackGround == "azul"){
        SetConsoleTextAttribute(color, (FOREGROUND_GREEN | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_INTENSITY | BACKGROUND_BLUE));
        Setposxy(PosX,PosY);    cout << Text;
    }
    else if( ForeGround == "naranja" and BackGround == "azul cielo"){
        SetConsoleTextAttribute(color, (FOREGROUND_GREEN | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_INTENSITY | BACKGROUND_GREEN | BACKGROUND_BLUE | BACKGROUND_GREEN));
        Setposxy(PosX,PosY);    cout << Text;
    }
    else if( ForeGround == "naranja" and BackGround == "blanco"){
        SetConsoleTextAttribute(color, (FOREGROUND_GREEN | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_INTENSITY | BACKGROUND_RED | BACKGROUND_BLUE | BACKGROUND_GREEN));
        Setposxy(PosX,PosY);    cout << Text;
    }
    else if( ForeGround == "naranja" and BackGround == "morado"){
        SetConsoleTextAttribute(color, (FOREGROUND_GREEN | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_INTENSITY | BACKGROUND_RED | BACKGROUND_BLUE | BACKGROUND_RED));
        Setposxy(PosX,PosY);    cout << Text;
    }
    else if( ForeGround == "naranja" and BackGround == "null"){
        SetConsoleTextAttribute(color, (FOREGROUND_GREEN | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_INTENSITY));
        Setposxy(PosX,PosY);    cout << Text;
    }


    //COLOR AZUL CIELO -> naranja verde rojo azul blanco Morado
    if( ForeGround == "azul cielo" and BackGround == "verde"){
        SetConsoleTextAttribute(color, (FOREGROUND_GREEN | FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_INTENSITY | BACKGROUND_GREEN));
        Setposxy(PosX,PosY);    cout << Text;
    }
    else if( ForeGround == "azul cielo" and BackGround == "rojo"){
        SetConsoleTextAttribute(color, (FOREGROUND_GREEN | FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_INTENSITY | BACKGROUND_RED));
        Setposxy(PosX,PosY);    cout << Text;
    }
    else if( ForeGround == "azul cielo" and BackGround == "azul"){
        SetConsoleTextAttribute(color, (FOREGROUND_GREEN | FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_INTENSITY | BACKGROUND_BLUE));
        Setposxy(PosX,PosY);    cout << Text;
    }
    else if( ForeGround == "azul cielo" and BackGround == "azul cielo"){
        SetConsoleTextAttribute(color, (FOREGROUND_GREEN | FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_INTENSITY | BACKGROUND_GREEN | BACKGROUND_BLUE | BACKGROUND_GREEN));
        Setposxy(PosX,PosY);    cout << Text;
    }
    else if( ForeGround == "azul cielo" and BackGround == "blanco"){
        SetConsoleTextAttribute(color, (FOREGROUND_GREEN | FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_INTENSITY | BACKGROUND_RED | BACKGROUND_BLUE | BACKGROUND_GREEN));
        Setposxy(PosX,PosY);    cout << Text;
    }
    else if( ForeGround == "azul cielo" and BackGround == "morado"){
        SetConsoleTextAttribute(color, (FOREGROUND_GREEN | FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_INTENSITY | BACKGROUND_RED | BACKGROUND_BLUE | BACKGROUND_RED));
        Setposxy(PosX,PosY);    cout << Text;
    }
    else if( ForeGround == "azul cielo" and BackGround == "null"){
        SetConsoleTextAttribute(color, (FOREGROUND_GREEN | FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_INTENSITY));
        Setposxy(PosX,PosY);    cout << Text;
    }


    //COLOR BLANCO -> azul_cielo naranja verde rojo azul Morado
    if( ForeGround == "blanco" and BackGround == "azul cielo"){
        SetConsoleTextAttribute(color, (FOREGROUND_RED | FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_INTENSITY | BACKGROUND_GREEN | BACKGROUND_BLUE | BACKGROUND_GREEN));
        Setposxy(PosX,PosY);    cout << Text;
    }
    else if( ForeGround == "blanco" and BackGround == "naranja"){
        SetConsoleTextAttribute(color, (FOREGROUND_RED | FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_INTENSITY | BACKGROUND_GREEN | BACKGROUND_RED | BACKGROUND_GREEN));
        Setposxy(PosX,PosY);    cout << Text;
    }
    else if( ForeGround == "blanco" and BackGround == "verde"){
        SetConsoleTextAttribute(color, (FOREGROUND_RED | FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_INTENSITY | BACKGROUND_GREEN));
        Setposxy(PosX,PosY);    cout << Text;
    }
    else if( ForeGround == "blanco" and BackGround == "rojo"){
        SetConsoleTextAttribute(color, (FOREGROUND_RED | FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_INTENSITY | BACKGROUND_RED));
        Setposxy(PosX,PosY);    cout << Text;
    }
    else if( ForeGround == "blanco" and BackGround == "azul"){
        SetConsoleTextAttribute(color, (FOREGROUND_RED | FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_INTENSITY | BACKGROUND_BLUE));
        Setposxy(PosX,PosY);    cout << Text;
    }
    else if( ForeGround == "blanco" and BackGround == "morado"){
        SetConsoleTextAttribute(color, (FOREGROUND_RED | FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_INTENSITY | BACKGROUND_RED | BACKGROUND_BLUE | BACKGROUND_RED));
        Setposxy(PosX,PosY);    cout << Text;
    }
    else if( ForeGround == "blanco" and BackGround == "null"){
        SetConsoleTextAttribute(color, (FOREGROUND_RED | FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_INTENSITY));
        Setposxy(PosX,PosY);    cout << Text;
    }


    //COLOR MORADO -> blanco azul_cielo naranja verde rojo azul
    if( ForeGround == "morado" and BackGround == "blanco"){
        SetConsoleTextAttribute(color, (BACKGROUND_RED | BACKGROUND_BLUE | BACKGROUND_RED | FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_BLUE | FOREGROUND_GREEN));
        Setposxy(PosX,PosY);    cout << Text;
    }
    else if( ForeGround == "morado" and BackGround == "azul cielo"){
        SetConsoleTextAttribute(color, (BACKGROUND_RED | BACKGROUND_BLUE | BACKGROUND_RED | FOREGROUND_INTENSITY | BACKGROUND_GREEN | BACKGROUND_BLUE | BACKGROUND_GREEN));
        Setposxy(PosX,PosY);    cout << Text;
    }
    else if( ForeGround == "morado" and BackGround == "naranja"){
        SetConsoleTextAttribute(color, (BACKGROUND_RED | BACKGROUND_BLUE | BACKGROUND_RED | FOREGROUND_INTENSITY | BACKGROUND_GREEN | BACKGROUND_RED | BACKGROUND_GREEN));
        Setposxy(PosX,PosY);    cout << Text;
    }
    else if( ForeGround == "morado" and BackGround == "verde"){
        SetConsoleTextAttribute(color, (BACKGROUND_RED | BACKGROUND_BLUE | BACKGROUND_RED | FOREGROUND_INTENSITY | BACKGROUND_GREEN));
        Setposxy(PosX,PosY);    cout << Text;
    }
    else if( ForeGround == "morado" and BackGround == "rojo"){
        SetConsoleTextAttribute(color, (BACKGROUND_RED | BACKGROUND_BLUE | BACKGROUND_RED | FOREGROUND_INTENSITY | BACKGROUND_RED));
        Setposxy(PosX,PosY);    cout << Text;
    }
    else if( ForeGround == "morado" and BackGround == "azul"){
        SetConsoleTextAttribute(color, (BACKGROUND_RED | BACKGROUND_BLUE | BACKGROUND_RED | FOREGROUND_INTENSITY | BACKGROUND_BLUE));
        Setposxy(PosX,PosY);    cout << Text;
    }
    else if( ForeGround == "morado" and BackGround == "null"){
        SetConsoleTextAttribute(color, (BACKGROUND_RED | BACKGROUND_BLUE | BACKGROUND_RED | FOREGROUND_INTENSITY));
        Setposxy(PosX,PosY);    cout << Text;
    }
}