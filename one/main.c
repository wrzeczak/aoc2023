#include <stdio.h>
#include <string.h>

int main(void) {
	const char * filepath = "./input";

	FILE * input = fopen(filepath, "r");

	int final = 0;

	for(int l = 0; l < 1000; l++) {
		char line[64];

		fscanf(input, "%s", line);

		int len = strlen(line);

		printf("[%d] %s\n", len, line);

		int first = -1;
		int last = -1;

		for(int i = 0; i < len; i++) {
			int c = (int) line[i];

			char one[4];
			if(i < (len - 2)) {
				strncpy(one, line + i, 3);
			} else {
				strncpy(one, "xxx", 3);
			}
			one[3] = '\0';

			char two[4];
			if(i < (len - 2)) {
				strncpy(two, line + i, 3);
			} else {
				strncpy(two, "xxx", 3);
			}
			two[3] = '\0';

			char three[6];
			if(i < (len - 4)) {
				strncpy(three, line + i, 5);
			} else {
				strncpy(three, "xxxxx", 5);
			}
			three[5] = '\0';

			char four[5];
			if(i < (len - 3)) {
				strncpy(four, line + i, 4);
			} else {
				strncpy(four, "xxxx", 4);
			}
			four[4] = '\0';

			char five[5];
			if(i < (len - 3)) {
				strncpy(five, line + i, 4);
			} else {
				strncpy(five, "xxxx", 4);
			}
			five[4] = '\0';

			char six[4];
			if(i < (len - 2)) {
				strncpy(six, line + i, 3);
			} else {
				strncpy(six, "xxx", 3);
			}
			six[3] = '\0';

			char seven[6];
			if(i < (len - 4)) {
				strncpy(seven, line + i, 5);
			} else {
				strncpy(seven, "xxxxx", 5);
			}
			seven[5] = '\0';

			char eight[6];
			if(i < (len - 4)) {
				strncpy(eight, line + i, 5);
			} else {
				strncpy(eight, "xxxxx", 5);
			}
			eight[5] = '\0';

			char nine[5];
			if(i < (len - 3)) {
				strncpy(nine, line + i, 4);
			} else {
				strncpy(nine, "xxxx", 4);
			}
			nine[4] = '\0';

			if(c >= 48 && c <= 57) {
				printf("NUMBER FOUND! %c\n", (char) c);
				if(first == -1) first = c;
				last = c;
			}

			if(strcmp(one, "one") == 0) {
				printf("WORD FOUND! %s\n", one);
				if(first == -1) first = 49;
				last = 49;
			}

			if(strcmp(two, "two") == 0) {
				printf("WORD FOUND! %s\n", two);
				if(first == -1) first = 50;
				last = 50;
			}

			if(strcmp(three, "three") == 0) {
				printf("WORD FOUND! %s\n", three);
				if(first == -1) first = 51;
				last = 51;
			}

			if(strcmp(four, "four") == 0) {
				printf("WORD FOUND! %s\n", four);
				if(first == -1) first = 52;
				last = 52;
			}

			if(strcmp(five, "five") == 0) {
				printf("WORD FOUND! %s\n", five);
				if(first == -1) first = 53;
				last = 53;
			}

			if(strcmp(six, "six") == 0) {
				printf("WORD FOUND! %s\n", six);
				if(first == -1) first = 54;
				last = 54;
			}

			if(strcmp(seven, "seven") == 0) {
				printf("WORD FOUND! %s\n", seven);
				if(first == -1) first = 55;
				last = 55;
			}

			if(strcmp(eight, "eight") == 0) {
				printf("WORD FOUND! %s\n", eight);
				if(first == -1) first = 56;
				last = 56;
			}

			if(strcmp(nine, "nine") == 0) {
				printf("WORD FOUND! %s\n", nine);
				if(first == -1) first = 57;
				last = 57;
			}
		}

		int step = (first - 48) * 10 + (last - 48);

		printf("%c%c - %d\n", (char) first, (char) last, step);

		final += step;
	}

	fclose(input);

	printf("SUM: %d\n", final);

	return 0;
}

