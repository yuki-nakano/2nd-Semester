﻿#include <iostream>
#include "test.h"

int main()
{
    Test testA;
    Test testB;

    testA.SetValue(10);
    testA.SetStaticValue(9872);
    testB.SetValue(345);
    //staticメンバ関数は以下のように書くこともできる
    Test::SetStaticValue(1000);

    testA.printValue();
    testB.printValue();

    //staticメンバ関数・変数の使い方１例(実体の数を数える)
    Test::PrintCount();
    //ブロック{}は単体で運用できる
    {
        Test testC;
        Test::PrintCount();
    }
    Test::PrintCount();

    return 0;
}
