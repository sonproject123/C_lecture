#include <stdio.h>

void main() {
#pragma region 주소 연산자
	// 변수의 주소값을 반환하는 연산자입니다.

	// int data = 10;
	// 
	// // %p : 변수의 주소를 출력하는 서식 지정자
	// printf("data 변수의 주소 : %p\n", &data);

	// 데이터의 주소값은 해당 데이터가 저장된 메모리의
	// 시작 주소를 의미하며, 메모리의 공간은 1 byte
	// 의 크기로 나누어 표현합니다.

#pragma endregion

#pragma region sizeof() 연산자
	// 변수의 메모리 크기를 반환하는 연산자입니다.

	// float health = 100.0f;
	// 
	// printf("int 변수의 메모리 크기 : %u\n", sizeof(int));
	// printf("float 변수의 메모리 크기 : %u\n", sizeof(health));

#pragma endregion

#pragma region 포인터
	// 메모리의 주소값을 저장할 수 있는 변수입니다.

	// int value = 100;
	// 
	// int* ptr = NULL;
	// 
	// ptr = &value;
	// 
	// printf("ptr의 값 : %p\n", ptr);
	// printf("ptr의 메모리 주소 : %p\n", &ptr);
	// printf("value의 메모리 주소 : %p\n", &value);

	// 포인터 변수도 자신의 메모리 공간을 가지고 있으며,
	// 포인터 변수에 변수의 주소를 저장하게 되면 해당
	// 변수의 시작 주소를 가리키게 됩니다.

	// int attack = 50;
	// 
	// int* iptr = &attack;
	// 
	// printf("attack의 값 : %d\n", attack);
	// 
	// *iptr = 99;
	// 
	// printf("attack의 값 : %d\n", attack);
	
	// 변수의 주소는 프로그램이 실행될 때마다 변경되며,
	// 포인터가 가리키는 메모리 공간의 자료형은 알 수
	// 없으므로 포인터가 가리키는 메모리의 자료형을
	// 선언해주어야 합니다.

	// float damage = 7.5f;
	// 
	// int* ptr1 = &damage;
	// 
	// printf("ptr1 변수가 가리키는 값 : %d\n", *ptr1);

	// 포인터 변수를 저장하기 위해 주소 값을 저장할 변수의
	// 자료형과 포인터 변수의 자료형이 일치해야 합니다.

	// float x, y;
	// float* fptr = NULL;
	// 
	// fptr = &x;
	// *fptr = 66.75f;
	// 
	// fptr = &y;
	// *fptr = 99.825f;
	// 
	// printf("x의 값: %.2f\n", x);
	// printf("y의 값: %.3f\n", y);
	// 
	// printf("fptr 포인터 변수의 메모리 크기 : %d\n", sizeof(fptr));

	// 포인터 변수의 크기는 중앙 처리 장치가 한 번에 처리
	// 할 수 있는 크기로 정해지며, 한 번에 처리할 수 있는
	// 크기는 운영체제에 따라 크기가 결정됩니다.

	

#pragma endregion

#pragma region 상수 지시 포인터
	// 포인터 변수를 상수로 선언하여, 포인터 변수가
	// 가리키고 있는 주소에 존재하는 값을 변경할 
	// 없도록 설정할 수 있습니다.
	// 역참조(*) 불가 -> 읽기 전용, 참조(&)를 바꾸는건 가능

	// int a = 10;
	// int b = 20;
	// 
	// const int* cptr = NULL;
	// 
	// cptr = &a;
	// 
	// printf("cptr의 값: %p\n", cptr);
	// // *cptr = 99; -> 에러발생
	// 
	// cptr = &b;
	// printf("cptr의 값: %p\n", cptr);

	// 상수로 선언한 포인터는 해당 변수의 값을 변경할 수
	// 없지만, 다른 변수의 주소는 가리킬 수 있습니다.

	


#pragma endregion


}