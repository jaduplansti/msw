#include <stdio.h>
#include <stdlib.h>
#include "definitions.h"
void Read_Write()
{
	for(int c;(c = fgetc(src)) != EOF;putc(c,dst)); 
}

int Add_Padding(int length,int offset)
{
	fseek(dst,offset,SEEK_SET);
	for(int i = 0;i<length;i++,putc(0,dst));
}
