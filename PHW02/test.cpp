#include <iostream>
#include"time.h"
using namespace std;

int main()
{
    int vertex, edge;
    cin >> vertex >> edge;

    int space;
    space =(vertex * vertex - vertex) / 2;
    cout << "space=" << space;

    int *random;
    random = new int [space+1]{0};
    /*for (int j = 0; j < space+1;j++)
    {
        cout << "j=" << random[j] << endl;
    }*/
    for (int i = 0; i < edge;i++)
    {
        int num= rand() % space+1;
        cout << "num" <<num<< endl;
        random[num] = 1;
    }
    /*for (int j = 0; j < space+1;j++)
    {
        cout << "j2=" << j << "ans=" << random[j] << endl;
    }*/

    int **a = NULL;
    a = new int*[vertex];
    for (int i = 0; i < vertex;i++)
    {
        new int[vertex];
    }
    cout << "hi" << endl;

    //input array
    /*int n = 0;
    for (int i = 0; i < vertex;i++)
    {
        for (int j = i + 1; j < vertex;j++)
        {
            a[i][j] = random[n];
            n++;
        }
    }*/
    int i, j;
    for (int k = 0; k < edge;k++)
    {
        if(random[k] == 1)
        {
            i = k / vertex;
            j = k % vertex;
            a[i][j] = 1;
        }
        else if(random[k] == 0)
        {
            i = k / vertex;
            j = k % vertex;
            a[i][j] = 0;
        }
    }
    
    cout << "finish" << endl;

    //ouput array
    for (int i = 0; i < vertex;i++)
    {
        for (int j = 0; j < vertex;j++)
        {
            cout << "i=" << i << "j=" << j << "ans=" << a[i][j] << endl;
        }
    }

    //delete array
    for (int i = 0; i < vertex;i++)
    {
        delete a[i];
    }
    delete a;
}