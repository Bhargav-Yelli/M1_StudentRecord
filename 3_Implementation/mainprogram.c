#include<stdio.h>
#include "user.h"
#include "methodfunction.h"


void ClearConsoleToColors();
void window();
void main_window();


int main(){
    ClearConsoleToColors(17,15);
    SetConsoleTitle("LEARNPROGRAMO - Student Record System");
    window();
    //use_pass_field();
    main_window();
    return 0;
}