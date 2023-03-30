#include "main.h"
/**
*_strcat - concatenates 2 strings
*@dest: pointer to the first string
*@src: pointer to the second string
*Return: pointer to char
*/

char *_strcat(char *dest, char *src) {
char *p = dest;
while (*p != '\0') {
p++;
}
while (*src != '\0') {
*p++ = *src++;
}
*p = '\0';
return dest;
}
