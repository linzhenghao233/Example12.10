/* r_drivel.c -- ����rand1()��srand1() */
/* ��s_and_r.cһ����� */
#include <stdio.h>
#include <stdlib.h>
extern void srand1(unsigned int x);
extern int rand1(void);

int main(void) {
	int count;
	unsigned seed;

	printf("Please enter your choice for seed.\n");
	while (scanf_s("%u", &seed) == 1) {
		srand1(seed);		//��������
		for (count = 0; count < 5; count++)
			printf("%d\n", rand1());
		printf("Please enter next seed (q to quit):\n");
	}
	printf("Done\n");

	return 0;
}