#include <stdlib.h>
#include <stdlib.h>
#include <string>	//string���������߂̃w�b�_�[	
#include <iostream>	//C++�Ŋg�����ꂽ���o�͗p�w�b�_�[

int main()
{
	char word = 'a';					//�ꕶ��
	char name[] = "nakano yuki";		//�����z��
	const char* cstr = "Hello World";	//const char �|�C���^�^

	//��L3�̕����A�������print�ŉ�ʂɏo�͂���
	printf("%c\n", word);
	printf("%s\n", name);
	printf("%s\n", cstr);

	//string�^�̏�����(�������@�F�X)
//	std::string str = "������";
//	std::string str;			//""(�����)
//	std::string str = "";		//""(�����)
//	std::string str = "ABC"		//"ABC"
//	std::string str("ABC");		//"ABC"
	std::string str2(3, 'A');	//"AAA"
	std::string str = str2;		//"AAA"

	//C����̊֐���string�^�ɓ��͂���Ă��镶������g���ɂ�
	//.c_str()�Ƃ����֐��ŁA������̃|�C���^���󂯎��K�v������
//	printf("%s\n", str.c_str());

	//C++�I�ȏ�����(iostream��string�̃C���N���[�h���K�v)
	std::cout << str << std::endl;

	//�����T�C�Y���擾 .size() or .length()
	std::cout << "str size = " << str.size() << std::endl;

	//�����̑}�� +=, .push_back(), .append(), .insert()
	str += "BBC";			//"AAABBC"		�����ɕ������ǉ�
	std::cout << str << std::endl;

	str.push_back('D');		//"AAABBCD"		�����ɂP������ǉ�
	std::cout << str << std::endl;

	str.append("EE");		//"AAABBCDEE"	�����ɕ������ǉ�
	std::cout << str << std::endl;

	str.insert(1, "FG");	//"AFGAABBCDEE"	�w��̏ꏊ�ɕ������ǉ�
	std::cout << str << std::endl;

	//�����̌��� .find()
	str = "ABC ABC";
	int index;
	index = str.find('C');		//2 �擪����P�����T��
	index = str.find("BC");		//1 �擪���當�����T��
	index = str.find("BC", 2);	//5 �w��̈ʒu����(�Q)���當�����T��
	index = str.find("Z");		//-1 ���� std::string::npos���g���Ĕ��f����
	
	//�����̒u������ .replase(�������ځA���������A�u������������)
	std::string from = "BC";
	std::string to = "X";
	str.replace(str.find(from), from.size(), to);
	std::cout << str << std::endl;

	//�����̍폜
	str.clear();
	std::cout << str << std::endl;








	system("pause");
	return 0;
}

