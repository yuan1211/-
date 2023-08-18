#include "stdafx.h"

void getAdminID()
{
    printf("아이디 : ");
    scanf("%s", getID);
}

void getAdminPW()
{
    printf("비밀번호 : ");
    scanf("%s", getPW);
}

int login()
{
    if (strcmp(getID, "admin") == 0 && strcmp(getPW, "1234") == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
