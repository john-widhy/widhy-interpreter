#include <stdio.h>
#include <string.h>

#define BUFSIZE 100

int main() { 
  char input[BUFSIZE];
  char var[BUFSIZE];
  char vars[BUFSIZE];
  char n1[BUFSIZE];
  char n2[BUFSIZE];
  char opration[100];
  char input_user[BUFSIZE];
  printf("Welcome To Widhy-Language Version 1.0 \n>> ");
  while (fgets(input, stdin)) {
  	input[strlen(input) - 1] = '\0';
    if (strncmp(input, "print", 5) == 0) {
      char *output = strtok(input + 6, "\n");
      printf("%s\n", output);
    } else if (strncmp(input, "clear", 4) == 0) {
      system("CLS");
    } else if (strncmp(input, "var", 3) == 0) {
    	printf(">>");
    	fgets(vars, BUFSIZE, stdin);
    	vars[strlen(vars) - 1] = '\0';
        printf(">>");
        fgets(var, BUFSIZE, stdin);
          if (strncmp(var, "get", 3) == 0) {
            printf("%s\n", vars);
        }
    } else if(strncmp(input, "show_var", 8) == 0){
    	printf("%s\n", var);
	} else if (strncmp(input, "write_len", 9) == 0) {
      char *widhy = strtok(input + 10, "\n");
      int len = strlen(widhy);
      printf("%s\n", widhy);
      printf("%i\n", len);
    } else if (strncmp(input, "sum", 3) == 0) {
      char *output = strtok(input + 4, "\n");
      int sum(int x, int y){
      	return 10 + 10;
	  }
    } else if (strncmp(input, "$", 1) == 0) {
      char widhy[BUFSIZE];
      char data[BUFSIZE];
	  char *variable = strtok(input + 1, "\n");
      char *constanta = strtok(input + 2, "\n");
      char *isi = strtok(input + 3, "\n");
    } else if(strncmp(input, "writeln =", 7) == 0){
    	printf("%s\n", input);
	} else if(strncmp(input, "widhy_parsing", 13) == 0){
    	char *array_widhy = strtok(input + 14, "\n");
    	char *ptr;
    	
    	ptr = strtok(array_widhy, ",");
          while (ptr != NULL) {
           printf("%s\n", ptr);
           ptr = strtok(NULL, ",");
         }
	} else if (strncmp(input, "repeatten", 9) == 0) {
      char *output = strtok(input + 10, "\n");
	  int i = 0;
      
    do
    {
        printf("%s\n", output, i + 1);
        i++;
    } while (i < 10);
    } else if (strncmp(input, "repeatfive", 10) == 0) {
      char *output = strtok(input + 11, "\n");
	  int i = 0;
      
    do
    {
        printf("%s\n", output, i + 1);
        i++;
    } while (i < 5);
    } else if (strncmp(input, "const", 5) == 0) {
       char *widhy = strtok(input + 6, "\n");
       char *konten = strtok(input + 11, "\n");
       char input_widhy;
       printf("This Char Was Saved");
       printf("\n>>");
       scanf("%c",&input_widhy);
       if(input_widhy=='w'){
       	  printf("%s\n", konten);
	    }
	   } else if(strncmp(input, "math", 4) == 0){
	   	  int a, b;
   char operator;
   
   printf(">>");
   scanf("%d %d", &a, &b);
   printf(">>");
   scanf(" %c", &operator);
   
   switch(operator) {
      case '+':
         printf("%d + %d = %d\n", a, b, a + b);
         break;
      case '-':
         printf("%d - %d = %d\n", a, b, a - b);
         break;
      case '*':
         printf("%d * %d = %d\n", a, b, a * b);
         break;
      case '/':
         printf("%d / %d = %d\n", a, b, a / b);
         break;
      default:
         printf("Invalid operator");
   }
	   	  
	   } else if (strncmp(input, "exit", 4) == 0) {
      break;
    } else if (strncmp(input, "array", 5) == 0) {
    	printf(">>");
       fgets(var, sizeof(var), stdin);  // Membaca string dan menyimpannya ke dalam buffer       
    } else if(strncmp(input, "parse", 5) == 0){
    	char *widhy = strtok(input + 6, "\n");
    	int len = strlen(widhy);
    	char *res = strstr(var, widhy);
    	printf("%s\n", res);
	} else if (strncmp(input, "len", 3) == 0) {
       char *widhy = strtok(input + 4, "\n");
       int leng = strlen(widhy);
       printf("%i\n", leng);
    } else if (strncmp(input, "leng", 4) == 0) {
       char *widhy = strtok(input + 5, "\n");
       int leng = strlen(widhy);
       printf("%s\n", widhy);
       printf("%s\n", widhy);
    } else if(strncmp(input, "int_plus", 8) == 0){
    	printf(">> ");
		fgets(n1, sizeof(n1), stdin);
		printf(">>");
		fgets(n2, sizeof(n2), stdin);
		int angka_frist = atoi(n1);
		int angka_two = atoi(n2);
		int res = angka_frist+angka_two;
	    printf("%i\n", res);
	} else if(strncmp(input, "int_minus", 9) == 0){
    	printf(">> ");
		fgets(n1, sizeof(n1), stdin);
		printf(">>");
		fgets(n2, sizeof(n2), stdin);
		int angka_frist = atoi(n1);
		int angka_two = atoi(n2);
		int res = angka_frist-angka_two;
	    printf("%i\n", res);
	} else if(strncmp(input, "int_slash", 9) == 0){
    	printf(">> ");
		fgets(n1, sizeof(n1), stdin);
		printf(">>");
		fgets(n2, sizeof(n2), stdin);
		int angka_frist = atoi(n1);
		int angka_two = atoi(n2);
		int res = angka_frist/angka_two;
	    printf("%i\n", res);
	} else if(strncmp(input, "int_star", 8) == 0){
    	printf(">> ");
		fgets(n1, sizeof(n1), stdin);
		printf(">>");
		fgets(n2, sizeof(n2), stdin);
		int angka_frist = atoi(n1);
		int angka_two = atoi(n2);
		int res = angka_frist*angka_two;
	    printf("%i\n", res);
	} else if(strncmp(input, "finput", 6) == 0){
		char *data = strtok(input + 7, "\n");
			printf(">>");
			fgets(var, sizeof(var), stdin);
			
		
	} else if(strncmp(input, "sinput", 6) == 0){
		printf("%s\n", var);
		
	} else if(strncmp(input, "ninput", 5) == 0){
		char data = strlen(var);
		printf("%s\n", data);
	} else if(strlen(input) == 0){
	} else {
      printf("Your Code Is Wrong.\n");
    }
    printf(">> ");
  }
  return 0;
}
