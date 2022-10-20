#include <stdio.h>
#include <stdlib.h>
FILE *src;
FILE *dst;
char Parse(int argc, char *argv[]);
void Read_Write();
int Add_Padding(int length,int offset);
int Dump(char *name);
