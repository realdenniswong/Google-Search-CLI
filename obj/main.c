#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {
	char cmd[200];
 	strcpy(cmd, "open https://www.google.com/search?q=");
	char query[64];
	char space[3];
	strcpy(space, "+");
	if (argc > 1) {
		for(int i = 1; i < argc; i++){
			strcpy(query, argv[i]);
			strcat(query, space);	
			strcat(cmd, query);
		}		
	}
	system(cmd);
	return 0;
}
