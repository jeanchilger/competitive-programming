#include <stdio.h>
#include <string.h>

int main(void) {

	char l[500];
	int len;
	scanf("%[^\n]s", l);
	len = strlen(l);
	if (len <= 80) {
		printf("YES\n");

	} else {
		printf("NO\n");
	}

	return 0;
}
