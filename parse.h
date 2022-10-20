#include <stdio.h>
#include <stdlib.h>
#include "definitions.h"
#include <string.h>
char Parse(int argc,char *argv[])
{
	for(int i = 1;i<argc;i++)
	{
		if(strcmp(argv[i],"-o") == 0)
		{
			dst = fopen(argv[++i],"wb");
			continue;
		}
		if(strcmp(argv[i],"-i") == 0)
		{
			src = fopen(argv[++i],"rb");
			continue;
		}
		if(strcmp(argv[i],"-of") == 0)
		{
			Add_Padding(atoi(argv[++i]),atoi(argv[++i])); //Converts Arguements Into A Int And Passing It As An Arguement
		}
	}
}
