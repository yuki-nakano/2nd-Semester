#include <iostream>

//デフォルト引数
//関数の引数にはデフォルト値を設定することができる
//デフォルト値が設定された引数は、関数の呼び出し時に省略することができる

class Caluculator
{
public:
    int Add(int a, int b);
    //引数bのデフォルト値を２とする
    //戻り値の型 関数名(仮引数の型 = 初期値)
    int Mul(int a, int b);

    //デフォルト値の設定は、宣言部でも、定義部でも構わないが、両方に書くことはできない
    //.h側の宣言部に書き、定義部はコメントアウトする
    //デフォルト引数の後ろには、未確定の引数を付けることはできない、デフォルト引数は絶対末尾
    //int sub (int a = 100, int b, int c);
 
};

int Caluculator::Add(int a, int b)
{
    return (a + b);
}

int Caluculator::Mul(int a, int b/* = 2*/)
{
    return (a * b);
}



int main()
{
    Caluculator calc;
    std::cout << calc.Add(10, 20) << std::endl;
    std::cout << calc.Mul(100, 4) << std::endl;
    std::cout << calc.Mul(100)    << std::endl;

}

