#include <stdlib.h>
#include <stdlib.h>
#include <vector>	//vectorを扱うためのヘッダー	
#include <iostream>
#include <time.h>

int main()
{
    srand((unsigned)time(NULL));
 
    std::vector<int> v1(8);         //要素８、すべてを0で初期化

    //iteratorを使ったfor文の回し方
    //型：std::vector<int>;;iterator
    std::vector<int>::iterator itr;
    for (itr = v1.begin(); itr != v1.end(); itr++)
    {
        *itr = rand();
        printf("%d\n", *itr);
    }
    printf("\n");

    system("pause");
    return 0;
}

