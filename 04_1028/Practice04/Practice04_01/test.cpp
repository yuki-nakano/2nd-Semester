#include "test.h"
#include "stdio.h"

//static�����o�ϐ�������(��`��)
//�^�� �N���X��::�ϐ��� (=������)
//��sutatic�����o�ϐ��́A�錾�ƕʂɎ��Ԃ�����Ă����K�v������
//�@���Ԃ����Ƃ��́A�K��cpp���ɏ���
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

//static�����o�֐��̏�����
//�߂�l�@�֐���(����)
void Test::SetStaticValue(int value_)
{
	staticValue = value_;

	//��static�����o�ϐ��̒��ł́A
	//�@static�ł͂Ȃ������o�ϐ��𑀍삷�邱�Ƃ͏o���Ȃ�
//	value = value_;
}

void Test::PrintCount()
{
	printf("Instance count = %d\n", instanceCount);
}