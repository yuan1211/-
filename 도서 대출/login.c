#include "stdafx.h"

void getAdminID()
{
    printf("���̵� : ");
    scanf("%s", getID);
}

void getAdminPW()
{
    printf("��й�ȣ : ");
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
