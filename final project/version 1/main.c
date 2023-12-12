#define _CRT_SECURE_NO_WARNINGS
#include "fundamentals.h"

int main(void)
{
	char buff[10];
	do
	{
		printf("1 - Fundamentals\n");
		fgets(buff, 10, stdin);

		switch (buff[0])
		{
		
		case '1': fundamentals();
			break;
		}
	} while (buff[0] != '0');
	return 0;
}