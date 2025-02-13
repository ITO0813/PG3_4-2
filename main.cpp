#include"Template.h"
#include<stdio.h>

int main() {

	/*クラス名から型を考えて<>の中を定義しよう*/
	Template<int, float> intfloatTemplate(10, 50.0f);
	Template<int, double> intDoubleTemplate(80, 13.0);
	Template<float, int> floatIntTemplate(2.0f, 9);
	Template<float, double> floatDoubleTemplate(11.0f, 3.5);
	Template<double, int> doubleIntTemplate(666.0, 333);
	Template<double, float> doubleFloatTemplate(435.8, 563.5f);

	std::cout << "int(10)　と float(50.0f) を比べて小さい数字を表す：" << intfloatTemplate.Min() << std::endl;
	std::cout << "int(80)　と double(13.0) を比べて小さい数字を表す：" << intDoubleTemplate.Min() << std::endl;
	std::cout << "float(2.0f)　と int(9) を比べて小さい数字を表す：" << floatIntTemplate.Min() << std::endl;
	std::cout << "float(11.0f)　と double(3.5) を比べて小さい数字を表す：" << floatDoubleTemplate.Min() << std::endl;
	std::cout << "double(666.0)　と int(333) を比べて小さい数字を表す：" << doubleIntTemplate.Min() << std::endl;
	std::cout << "double(435.8)　と float(563.5) を比べて小さい数字を表す：" << doubleFloatTemplate.Min() << std::endl;

	return 0;
}