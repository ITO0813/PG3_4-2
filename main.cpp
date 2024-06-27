#include"Template.h"
#include<stdio.h>

int main() {

	/*�N���X������^���l����<>�̒����`���悤*/
	Template<int, float> intfloatTemplate(10, 50.0f);
	Template<int, double> intDoubleTemplate(80, 13.0);
	Template<float, int> floatIntTemplate(2.0f, 9);
	Template<float, double> floatDoubleTemplate(11.0f, 3.5);
	Template<double, int> doubleIntTemplate(666.0, 333);
	Template<double, float> doubleFloatTemplate(435.8, 563.5f);

	std::cout << "int(10)�@�� float(50.0f) ���ׂď�����������\���F" << intfloatTemplate.Min() << std::endl;
	std::cout << "int(80)�@�� double(13.0) ���ׂď�����������\���F" << intDoubleTemplate.Min() << std::endl;
	std::cout << "float(2.0f)�@�� int(9) ���ׂď�����������\���F" << floatIntTemplate.Min() << std::endl;
	std::cout << "float(11.0f)�@�� double(3.5) ���ׂď�����������\���F" << floatDoubleTemplate.Min() << std::endl;
	std::cout << "double(666.0)�@�� int(333) ���ׂď�����������\���F" << doubleIntTemplate.Min() << std::endl;
	std::cout << "double(435.8)�@�� float(563.5) ���ׂď�����������\���F" << doubleFloatTemplate.Min() << std::endl;

	return 0;
}