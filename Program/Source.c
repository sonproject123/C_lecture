#include <stdio.h>

void main() {
#pragma region �ݺ���
	// ���α׷� ������ Ư���� �۾��� �ݺ�������
	// �����ϴ� ��ɹ��Դϴ�.

#pragma region ���� ������
	// �ǿ����ڸ� �ϳ��� ������Ű�ų� ���ҽ�ų ��
	// ����ϴ� �������Դϴ�.

	// int attack = 10;
	// 
	// int damage = ++attack;
	// 
	// printf("damage�� �� : %d\n", damage);
	// printf("attack�� �� : %d\n", attack);
	// 
	// damage = --attack;
	// 
	// printf("damage�� �� : %d\n", damage);
	// printf("attack�� �� : %d\n", attack);

	// ���� ���� �����ڴ� ������ ���� ������Ų �Ŀ�
	// ������ �����ϰ�, ���� ���� �����ڴ� ������
	// ������ ���� ������ ���� ������ŵ�ϴ�.

	// int count = 5;
	// 
	// int result = count++;
	// 
	// printf("result�� ������ �� : %d\n", result); 
	// printf("count�� ������ �� : %d\n", count);   
	// 
	// result = count--;
	// 
	// printf("result�� ������ �� : %d\n", result); 
	// printf("count�� ������ �� : %d\n", count);   

	// ���� ���� �����ڴ� ������ ������ ����
	// ������ ���� ������ŵ�ϴ�.

#pragma endregion

#pragma region for��
	// �ʱ���� �����Ͽ� ���ǽ��� ����� ���� Ư����
	// Ƚ����ŭ �ݺ��ϴ� �ݺ����Դϴ�.

	//	for (int i = 0; i < 5; i++) {
	//		printf("Warning %d\n", i+1);
	//	}

	// for���� ��� ������ ������ ���¿� �ݴ�� �ʱ����
	// �����ϰ� �Ǹ� ������ ��ġ���� �ʾ� ��� �ݺ�������
	// ����Ǵ� ������ �߻��մϴ�.

#pragma endregion

#pragma region while��
	// Ư�� ������ ������ ������ ����ؼ� �־���
	// ��ɹ��� �����ϴ� �ݺ����Դϴ�.

	//	int energy = 5;
	//	
	//	while (energy > 0) {
	//		printf("energy�� ��: %d\n", energy);
	//		energy--;
	//	}

	// while ���� ��� ������ �Ʒ��� ����Ǹ�, �Ʒ���
	// �ִ� ��ɹ��� ������ �� ������ �ٽ� ���� �ִ�
	// ��ɹ����� ���ư��� �ݺ��ϴ� �����Դϴ�.

#pragma endregion

#pragma region do while��
	// ���ǰ� ������� �� ���� �۾��� ������ ����
	// ���ǿ� ���� ��ɹ��� �����ϴ� �ݺ����Դϴ�.

	//	char alphabet = 'A';
	//	
	//	do {
	//		printf("alphabet ������ �� : %c\n", alphabet);
	//	} while (alphabet == 'B');
#pragma endregion

#pragma region continue��
	// �ش� ���ǹ��� �������� �ʰ�, �ݺ����� �̾
	// �����ϴ� ����Դϴ�.

	//	for (int i = 1; i <= 5; i++) {
	//		if (i == 3)
	//			continue;
	//	
	//		printf("i�� �� : %d\n", i);
	//	}

	// �ݺ������� continue���� ������ �Ǹ� �ٽ�
	// ���������� ���ʴ�� �����մϴ�.
#pragma endregion

#pragma region ���� for��
	//	for (int i = 0; i < 3; i++) {
	//		printf("i�� �� : %d\n", i);
	//		for (int j = 0; j < 5; j++)
	//			printf("j�� �� : %d\n", j);
	//	}
#pragma endregion

#pragma region ������
	for (int i = 1; i <= 9; i++)
		for (int j = 1; j <= 9; j++)
		printf("%d x %d = %d\n", i, j, i * j);
#pragma endregion


#pragma endregion

}