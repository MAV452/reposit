// string.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <stdio.h>
#include <locale.h>
#include <string.h>


int _tmain(int argc, _TCHAR* argv[])
{
setlocale(0,"");
char str[]="dog milk city street train  swan bird stranger danger";
char ch;
printf("Исходная строка:\n%s \nВведите символ для поиска.\n",str);
scanf_s("%c",&ch);
printf_s("Вы ввели символ: %c\n",ch);
int i=0;
int leng=strlen(str);
while (i<leng)
{
	if(ch==str[i]){
		if (i!=0){
		while(str[i]!=' '){
			i--;
	}
		if(str[i]==' '){
			i++;
		}
		}
		while((str[i]!=' ')){
			printf("%c",str[i]);
			i++;
		} 
		printf(" ");
		i++;
	} else {
		i++;
	}
	}

	return 0;
}

