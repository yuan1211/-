#include "stdafx.h"

long long int main(void)
{
    init();

    while (1) 
    {
        printf("****���� ���� ���α׷�****\n");

        if (login()) 
        {
            printf("�α��� ����\n");

            while (1) 
            {
                printmenu();
                int selected;
                printf("�۾� ��ȣ �Է�: ");
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
                    printf("���α׷� ����\n");
                    exit(0);
                default:
                    printf("�߸��� �۾� ��ȣ\n");
                }
            }
        }
        else 
        {
            printf("�α��� ����, �ٽ� �õ��ϼ���.\n");
        }
    }

  
    return 0;
}
