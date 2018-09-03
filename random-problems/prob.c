#include <stdio.h>

int main() {
    int n;
    char str[n+1];
    scanf("%s", str);
    
    int occurred[26];
    
    int i;
    for (i = 0; i < n; i++) {
    	occurred[i] = 0;
    }
	
	int left = 26;
    for (i = 0; i < n; i++) {
     	printf("%d\n", str[i] - 'A');
        if (str[i] >= 'A' && str[i] <= 'z') {
            if (!occurred[str[i] - 'A']) {
            	occurred[str[i] - 'A'] = 1;
            	left -= 1;
            }
        }
    }
    
    if (left = 0) printf("YES\n");
    else printf("NO\n");

    return 0;
}
