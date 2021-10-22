//
// Created by 37756 on 2021/10/22.
//
#include <stdio.h>

int main(int argc, char** argv) {
	printf("%d\n", argc);
	if (argc == 1) {
		fprintf(stderr, "at least 1 argument\n");
	}
	return 0;
}
