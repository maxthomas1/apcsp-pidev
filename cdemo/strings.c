#include <stdio.h>
#include <string.h>

int main()
{
	char str[] = "abcdefghijklmnopqrstuvwxyz";
	char str2[27];
	char str3[53];
	char c ='a';
	for (int i = 0; i < 26; i++)
	{
		str2[i] = str[0] +i;
	}
	if (strcmp(str, str2) == 0)
		printf("The strings are identical\n");
	else
		printf("The strings are different\n");
	printf("%s\n %s\n", str, str2);

	for (int i = 0; i < 26; i++)
	{
		str[i] = str[i] - 32;
	}
	if (strcmp(str2, str3) == 0)
		printf("The strings are identical\n");
	else
		printf("The strings are different\n");
	strcpy(str3, str);
	strcat(str3, str2);
	printf("%s + %s = %s\n", str, str2, str3);

}
