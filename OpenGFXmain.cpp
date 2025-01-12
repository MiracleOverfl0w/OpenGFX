#include<stdio.h>
#include<sys/types.h>
#include<stdlib.h>
#include"libs/libgfx.hpp"
using namespace std;
using namespace cv;
int main(int argc,char* argv[]){
	
	const char* __SRC__ = argv[argc-1];
	printf("%s\n",__SRC__);
	if(strcmp(__SRC__,__INSTALL__COMMAND__) == 0){
		if(!system(__INSTALL__COMMAND__LINUX__)) printf("INSTALLATION SUCCESS.\n");
		else fprintf(stderr,"INSTALLATION FAILD.\n");
	}
}
