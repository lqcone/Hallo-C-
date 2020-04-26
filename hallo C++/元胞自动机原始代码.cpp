

#include<iostream>

#include<conio.h>

#include<windows.h> 

#include<stdlib.h>

#include<time.h>  

using namespace std;

#define N 49

#define GEN 999

int a[N][N][GEN];

void gotoxy(int x, int y)

{

    HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);

    COORD pos;

    pos.X = x;

    pos.Y = y;

    SetConsoleCursorPosition(handle, pos);

}

void show(int g)

{

    gotoxy(0, 0);

    int i, j;

    cout << "演化" << g << "代之后的生命细胞状态为" << endl << "--------------------------------------------------------------------" << endl;

    for (i = 0; i < N; i++)

    {

        for (j = 0; j <N; j++)

        {

            if (a[i][j][g] == 1)

                cout << "●";

            else if (a[i][j][g] == 0)

                cout << "  ";

        }

        cout << endl;

    }

    Sleep(5);

}

void update(int k)

{

    int i, j, count = 0;

    for (i = 0; i < N; i++)

        for (j = 0; j <N; j++)

        {

            count = 0;

            if (i == 0 && j == 0)

            {

                if (a[i][j + 1][k] == 1)

                    count++;

                else if (a[i + 1][j][k] == 1)

                    count++;

                else if (a[i + 1][j + 1][k] == 1)

                    count++;

                if (count <= 1 || count >= 4)

                    a[i][j][k + 1] = 0;

                else if (count == 2)

                    a[i][j][k + 1] = a[i][j][k];

                else if (count == 3)

                    a[i][j][k + 1] = 1;

            }

            if (i == 0 && j != 0 && j != N - 1)

            {

                if (a[i][j - 1][k] == 1)

                    count++;

                if (a[i][j + 1][k] == 1)

                    count++;

                if (a[i + 1][j - 1][k] == 1)

                    count++;

                if (a[i + 1][j][k] == 1)

                    count++;

                if (a[i + 1][j + 1][k] == 1)

                    count++;

                if (count <= 1 || count >= 4)

                    a[i][j][k + 1] = 0;

                if (count == 2)

                    a[i][j][k + 1] = a[i][j][k];

                if (count == 3)

                    a[i][j][k + 1] = 1;

            }

            if (i == 0 && j == N - 1)

            {

                if (a[i][j - 1][k] == 1)

                    count++;

                if (a[i + 1][j - 1][k] == 1)

                    count++;

                if (a[i + 1][j][k] == 1)

                    count++;

                if (count <= 1 || count >= 4)

                    a[i][j][k + 1] = 0;

                if (count == 2)

                    a[i][j][k + 1] = a[i][j][k];

                if (count == 3)

                    a[i][j][k + 1] = 1;

            }

            if (i != 0 && i != N - 1 && j == 0)

            {

                count = 0;

                if (a[i - 1][j][k] == 1)

                    count++;

                if (a[i - 1][j + 1][k] == 1)

                    count++;

                if (a[i][j + 1][k] == 1)

                    count++;

                if (a[i + 1][j][k] == 1)

                    count++;

                if (a[i + 1][j + 1][k] == 1)

                    count++;

                if (count <= 1 || count >= 4)

                    a[i][j][k + 1] = 0;

                if (count == 2)

                    a[i][j][k + 1] = a[i][j][k];

                if (count == 3)

                    a[i][j][k + 1] = 1;

            }

            if (i == N - 1 && j == 0)

            {

                count = 0;

                if (a[i - 1][j][k] == 1)

                    count++;

                if (a[i - 1][j + 1][k] == 1)

                    count++;

                if (a[i][j + 1][k] == 1)

                    count++;

                if (count <= 1 || count >= 4)

                    a[i][j][k + 1] = 0;

                if (count == 2)

                    a[i][j][k + 1] = a[i][j][k];

                if (count == 3)

                    a[i][j][k + 1] = 1;

            }

            if (i == N - 1 && j != 0 && j != N - 1)

            {

                count = 0;

                if (a[i - 1][j - 1][k] == 1)

                    count++;

                if (a[i - 1][j][k] == 1)

                    count++;

                if (a[i - 1][j + 1][k] == 1)

                    count++;

                if (a[i][j - 1][k] == 1)

                    count++;

                if (a[i][j + 1][k] == 1)

                    count++;

                if (count <= 1 || count >= 4)

                    a[i][j][k + 1] = 0;

                if (count == 2)

                    a[i][j][k + 1] = a[i][j][k];

                if (count == 3)

                    a[i][j][k + 1] = 1;

            }

            if (j == N - 1 && i != 0 && i != N - 1)

            {

                count = 0;

                if (a[i - 1][j - 1][k] == 1)

                    count++;

                if (a[i - 1][j][k] == 1)

                    count++;

                if (a[i][j - 1][k] == 1)

                    count++;

                if (a[i + 1][j - 1][k] == 1)

                    count++;

                if (a[i + 1][j][k] == 1)

                    count++;

                if (count <= 1 || count >= 4)

                    a[i][j][k + 1] = 0;

                if (count == 2)

                    a[i][j][k + 1] = a[i][j][k];

                if (count == 3)

                    a[i][j][k + 1] = 1;

            }

            if (i == N - 1 && j == N - 1)

            {

                count = 0;

                if (a[i - 1][j - 1][k] == 1)

                    count++;

                if (a[i - 1][j][k] == 1)

                    count++;

                if (a[i][j - 1][k] == 1)

                    count++;

                if (count <= 1 || count >= 4)

                    a[i][j][k + 1] = 0;

                if (count == 2)

                    a[i][j][k + 1] = a[i][j][k];

                if (count == 3)

                    a[i][j][k + 1] = 1;

            }

            else if (i != 0 && j != 0 && i != N - 1 && j != N - 1)

            {

                count = 0;

                if (a[i - 1][j - 1][k] == 1)

                    count++;

                if (a[i - 1][j][k] == 1)

                    count++;

                if (a[i - 1][j + 1][k] == 1)

                    count++;

                if (a[i][j - 1][k] == 1)

                    count++;

                if (a[i][j + 1][k] == 1)

                    count++;

                if (a[i + 1][j - 1][k] == 1)

                    count++;

                if (a[i + 1][j][k] == 1)

                    count++;

                if (a[i + 1][j + 1][k] == 1)

                    count++;

                if (count <= 1 || count >= 4)

                    a[i][j][k + 1] = 0;

                if (count == 2)

                    a[i][j][k + 1] = a[i][j][k];

                if (count == 3)

                    a[i][j][k + 1] = 1;

            }

        }

}

int main1()

{

    int i, j, k, count;

    srand(time(NULL));

    for (i = 0; i < N; i++)

        for (j = 0; j <N; j++)

            a[i][j][0] = rand() % 2;

    /*cout << "随机初始生命细胞状态为" << endl << "--------------------------------------------------------------------" << endl;

    for (i = 0;i < N;i++)

    {

        for (j = 0;j < N;j++)

        {

            if (a[i][j][0] == 0)

                cout << "⊙";

            else

                a[i][j][0] = 1;

                cout << "  ";

        }

        cout << endl;

    }*/

    for (i = 0; i < GEN; i++)

    {

        show(i);

        update(i);

    }

    system("pause");

    return 0;

}
