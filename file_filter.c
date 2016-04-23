#include "stdio.h"
#include "ctype.h"

int main() {
	char word[5000];
	FILE *fp;
	fp = fopen("output.txt","r+");
	while(!feof(fp)){
		fscanf(fp,"%s",word);
		if(!strcmp(word,"Data:"))
			fprintf(fp,"\n\t");	
		if(!strcmp(word,"Frame:")){
			fprintf(fp,"\n");
		}	
		if(!strcmp(word,"Protocol:")){
			fscanf(fp,"%s",word);
			fprintf(fp,"\n");
			if(!strcmp(word,"8"))
				fprintf(fp,"\t");
		}
		if(!strcmp(word,"IPv4")){
			fscanf(fp,"%s",word);
			if(!strcmp(word,"Packet:"))
				fprintf(fp,"\n\t\t\t");
		}
	}
	fclose(fp);
}
