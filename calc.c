#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char*argv[])

{

		char c = argv[1][0];
		float a = atof(argv[2]);
		float b = atof(argv[3]);

		switch(c) {
			case'+':
				{
					float ans = a + b;
					printf("%f\n", ans);
				break;
				}

			case'-':
				{
					float ans = a - b;
					printf("%f\n", ans);
				break;
				}

			case'x':
				{
					float ans = a * b;
					printf("%f\n", ans);
				break;
				}

			case'/':
				{
					if(b == 0)
						{printf("ERROR: DIVIDE BY 0\n");}
					else
					{
					float ans = a / b;
					printf("%f\n", ans);
					}
				break;
				}
	}
	return (0);
}

