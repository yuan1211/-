#include "stdafx.h"

void clearScreen();

long long int main()
{
    int selected = 0;

    while (selected != 4)
    {
        printf("**********************\n");
        printf("1. 책 목록 보기\n");
        printf("2. 책 대출\n");
        printf("3. 책 반납\n");
        printf("4. 나가기\n");
        printf("**********************\n");
        printf("원하는 작업 번호 : ");
        scanf("%d", &selected);

        switch (selected) {
        case 1:
            printf("책 목록보기\n");
            clearScreen();
            break;
        case 2:
            printf("책 대출\n");
            clearScreen();
            break;
        case 3:
            printf("책 반납\n");
            clearScreen();
            break;
        case 4:
            printf("나가기\n");
            break;
        default:
            printf("잘못된 선택입니다. 다시 선택하세요.\n");
            clearScreen();
        }
    }

    return 0;
}

void clearScreen()
{
    printf("아무 키나 누르면 화면 이동\n");
    getchar(); 
    getchar(); 
    system("clear || cls"); 
}
