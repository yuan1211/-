#include "stdafx.h"

long long int main(void)
{
    init();

    while (1) 
    {
        printf("****도서 관리 프로그램****\n");

        if (login()) 
        {
            printf("로그인 성공\n");

            while (1) 
            {
                printmenu();
                int selected;
                printf("작업 번호 입력: ");
                scanf("%d", &selected);

                switch (selected)
                {
                case 1:
                    system("clear");
                    PrintBooks();
                    Anykey();
                    break;
                case 2:
                    system("clear");
                    Bookloan();
                    BookSet();
                    Anykey();
                    break;
                case 3:
                    system("clear");
                    ReturnBook();
                    BookSet();
                    Anykey();
                    break;
                case 4:
                    printf("프로그램 종료\n");
                    exit(0);
                default:
                    printf("잘못된 작업 번호\n");
                }
            }
        }
        else 
        {
            printf("로그인 실패, 다시 시도하세요.\n");
        }
    }

  
    return 0;
}
