#include "stdafx.h"

void clearScreen();

long long int main()
{
    int selected = 0;

    while (selected != 4)
    {
        printf("**********************\n");
        printf("1. å ��� ����\n");
        printf("2. å ����\n");
        printf("3. å �ݳ�\n");
        printf("4. ������\n");
        printf("**********************\n");
        printf("���ϴ� �۾� ��ȣ : ");
        scanf("%d", &selected);

        switch (selected) {
        case 1:
            printf("å ��Ϻ���\n");
            clearScreen();
            break;
        case 2:
            printf("å ����\n");
            clearScreen();
            break;
        case 3:
            printf("å �ݳ�\n");
            clearScreen();
            break;
        case 4:
            printf("������\n");
            break;
        default:
            printf("�߸��� �����Դϴ�. �ٽ� �����ϼ���.\n");
            clearScreen();
        }
    }

    return 0;
}

void clearScreen()
{
    printf("�ƹ� Ű�� ������ ȭ�� �̵�\n");
    getchar(); 
    getchar(); 
    system("clear || cls"); 
}
