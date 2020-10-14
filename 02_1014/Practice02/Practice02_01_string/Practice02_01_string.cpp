#include <stdlib.h>
#include <stdlib.h>
#include <string>	//stringを扱うためのヘッダー	
#include <iostream>	//C++で拡張された入出力用ヘッダー

int main()
{
	char word = 'a';					//一文字
	char name[] = "nakano yuki";		//文字配列
	const char* cstr = "Hello World";	//const char ポインタ型

	//上記3つの文字、文字列をprintで画面に出力する
	printf("%c\n", word);
	printf("%s\n", name);
	printf("%s\n", cstr);

	//string型の書き方(初期化法色々)
//	std::string str = "文字列";
//	std::string str;			//""(空っぽ)
//	std::string str = "";		//""(空っぽ)
//	std::string str = "ABC"		//"ABC"
//	std::string str("ABC");		//"ABC"
	std::string str2(3, 'A');	//"AAA"
	std::string str = str2;		//"AAA"

	//C言語の関数でstring型に入力されている文字列を使うには
	//.c_str()という関数で、文字列のポインタを受け取る必要がある
//	printf("%s\n", str.c_str());

	//C++的な書き方(iostreamとstringのインクルードが必要)
	std::cout << str << std::endl;

	//文字サイズを取得 .size() or .length()
	std::cout << "str size = " << str.size() << std::endl;

	//文字の挿入 +=, .push_back(), .append(), .insert()
	str += "BBC";			//"AAABBC"		末尾に文字列を追加
	std::cout << str << std::endl;

	str.push_back('D');		//"AAABBCD"		末尾に１文字を追加
	std::cout << str << std::endl;

	str.append("EE");		//"AAABBCDEE"	末尾に文字列を追加
	std::cout << str << std::endl;

	str.insert(1, "FG");	//"AFGAABBCDEE"	指定の場所に文字列を追加
	std::cout << str << std::endl;

	//文字の検索 .find()
	str = "ABC ABC";
	int index;
	index = str.find('C');		//2 先頭から１文字探す
	index = str.find("BC");		//1 先頭から文字列を探す
	index = str.find("BC", 2);	//5 指定の位置から(２)から文字列を探す
	index = str.find("Z");		//-1 だが std::string::nposを使って判断する
	
	//文字の置き換え .replase(何文字目、何文字分、置き換え文字列)
	std::string from = "BC";
	std::string to = "X";
	str.replace(str.find(from), from.size(), to);
	std::cout << str << std::endl;

	//文字の削除
	str.clear();
	std::cout << str << std::endl;








	system("pause");
	return 0;
}

