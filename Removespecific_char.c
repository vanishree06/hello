#include <stdio.h> 
#include <stdlib.h> 
#define NO_OF_CHARS 256 
int *getCharCountArray(char *str) 
{ 
int *count = (int *)calloc(sizeof(int), NO_OF_CHARS); 
int i; 
for (i = 0; *(str+i); i++) 
	count[*(str+i)]++; 
return count; 
} 
char *removeDirtyChars(char *str, char *mask_str) 
{ 
int *count = getCharCountArray(mask_str); 
int ip_ind = 0, res_ind = 0; 
while (*(str + ip_ind)) 
{ 
	char temp = *(str + ip_ind); 
	if (count[temp] == 0) 
	{ 
		*(str + res_ind) = *(str + ip_ind); 
		res_ind++; 
	} 
	ip_ind++; 
}		 

return str; 
} 
int main() 
{ 
	char str[]		 = "Welcome to AIET"; 
	char mask_str[] = "mask"; 
	printf("%s", removeDirtyChars(str, mask_str)); 
	return 0; 
} 
