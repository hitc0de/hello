#include <stdlib.h>
#include <stdio.h>


int main(void) {
	printf("*******************************\n");
	#ifdef __INTEL_COMPILER
		printf("  Intel(R) Compiler was used!\n");
	#else
		printf("Intel(R) Compiler was NOT used!\n");
	#endif
	printf("*******************************\n");
	return 0;
}
