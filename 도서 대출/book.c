#include "stdafx.h"


char BooksArray[MAX][MAX];
int NumbersArray[MAX];
char line[MAX];


int CountLines()
{
    FILE* file = fopen("BookList.txt", "rb");
    int lines = 1;
    char c;
    while (fscanf(file, "%c", &c) != EOF)
    {
        if (c == '\n')
        {
            lines++;
        }
    }
    fclose(file);
    return lines;
}


void init()
{
    FILE* file = fopen("BookList.txt", "rb");
    for (int i = 0; i < CountLines(); i++)
    {
        fscanf(file, "%s %d", BooksArray[i], &NumbersArray[i]);
    }
    fclose(file);
}


void BookSet()
{
    FILE* file1 = fopen("BookList.txt", "wb");
    fputs("", file1);
    fclose(file1);
    FILE* file2 = fopen("BookList.txt", "a");
    int j = 0;
    while (NumbersArray[j] != NULL)
    {
        fprintf(file2, "%s %d\n", BooksArray[j], NumbersArray[j]);
        j++;
    }
    fclose(file2);
}


void PrintBooks()
{
    system("clear");
    FILE* file = fopen("BookList.txt", "rb");
    printf("********************\n");
    printf("****å ��� ȭ��****\n");
    printf("å�̸� ���Ⱑ�ɱǼ�\n");
    printf("********************\n\n");
    while (fgets(line, MAX, file) != NULL)
    {
        printf("%s", line);
    }
    printf("\n\n");
    fclose(file);
}


void Bookloan()
{
    printf("********************\n");
    printf("****å ���� ȭ��*****\n");
    printf("********************\n");
    char BookName[MAX];
    printf("������ å �̸� : ");
    scanf("%s", BookName);
    for (int i = 0; i < CountLines(); i++)
    {
        if (strcmp(BookName, BooksArray[i]) == 0)
        {
            NumbersArray[i]--;
            printf("������ �Ϸ�Ǿ����ϴ�.\n");
            break; 
        }
    }
}


void ReturnBook()
{
    printf("********************\n");
    printf("****å �ݳ� ȭ��****\n");
    printf("********************\n");
    char BookName[MAX];
    printf("�ݳ��� å �̸� : ");
    scanf("%s", BookName);
    for (int i = 0; i < CountLines(); i++)
    {
        if (strcmp(BookName, BooksArray[i]) == 0)
        {
            NumbersArray[i]++;
            printf("�ݳ��� �Ϸ�Ǿ����ϴ�.\n");
            break; 
        }
    }
}

int main()
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
            PrintBooks();
            break;
        case 2:
            Bookloan();
            break;
        case 3:
            ReturnBook();
            break;
        case 4:
            printf("���α׷��� �����մϴ�.\n");
            break;
        default:
            printf("�߸��� �����Դϴ�. �ٽ� �����ϼ���.\n");
        }
    }

    return 0;
}
