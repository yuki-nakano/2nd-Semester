#include "test.h"
#include "stdio.h"

//staticメンバ変数書き方(定義部)
//型名 クラス名::変数名 (=初期化)
//※sutaticメンバ変数は、宣言と別に実態を作っておく必要がある
//　実態を作るときは、必ずcpp側に書く
int Test::staticValue = 0;
int Test::instanceCount = 0;

Test::Test()
{
	value = 0;

	instanceCount++;
}

Test::~Test()
{
	instanceCount--;
}

void Test::SetValue(int value_)
{
	value = value_;
}

int Test::GetValue()
{
	return value;
}

void Test::printValue()
{
	printf("value = %d\n", value);
	printf("staticValue = %d\n", staticValue);
}

//staticメンバ関数の書き方
//戻り値　関数名(引数)
void Test::SetStaticValue(int value_)
{
	staticValue = value_;

	//※staticメンバ変数の中では、
	//　staticではないメンバ変数を操作することは出来ない
//	value = value_;
}

void Test::PrintCount()
{
	printf("Instance count = %d\n", instanceCount);
}