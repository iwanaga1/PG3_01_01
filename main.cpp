#include <stdio.h>

template <typename Type>

char Min(Type a, Type b) {

	///�֐��e���v���[�g
	if (a > b) {
		return static_cast<Type>(b);
	}
	else {
		return static_cast<Type> (a);
	}
}



int main() {


	//�v�Z�ƌ��ʏo��
	printf("%d\n", Min<int>(128, 256));
	printf("%f\n", Min<float>(52.5f, 55.0f));
	printf("%lf\n", Min<double>(3.14159265, 2.7182818281));

	return 0;
}
