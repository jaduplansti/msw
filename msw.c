#include <stdio.h>
#include <stdlib.h>
#include "parse.h"
#include "read&write.h"
 /*
  msw.c
  Copyright(C) 2022 Jaduplansti
  A Fast Minimalistic File Mover
 */
 int main(int argc,char *argv[])
 {
	Parse(argc,argv);
	if(src == NULL)
	{
		fprintf(stdout,"Failed To Open File\n");
	}
	 Read_Write();
	return 0;
 }
