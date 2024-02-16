//1b. przepe³nienie zmiennoprzecinkowej.c--bada jak zachowuje sie system w sytuacji przepelnienia liczby zmiennoprzecinkowej na naszym komputerze

#include<stdio.h>
int main(void)
{
	float zaduza=3.4E38*100.0f;
	printf("%e\n", zaduza);
	
	return 0;
}
