#include<stdio.h>
#include<sys/types.h>
#include<stdlib.h>
#include"libs/libgfx.hpp"
using namespace std;
using namespace cv;
int main(int argc,char* argv[]){
	
	const char* __SRC__ = argv[argc-1];
	const char* option = argv[1];
	//printf("%s\n",__SRC__);

	if(strcmp(__SRC__,__INSTALL__COMMAND__) == 0){
		if(!system(__INSTALL__COMMAND__LINUX__) && !system(__RESTART__BASH__)){
		       	printf("INSTALLATION SUCCESS.\n");
		}
		else fprintf(stderr,"INSTALLATION FAILD.\n");
		return 0;	
	}
	if(!strcmp(option,__IMG__SHOW__)){
		Mat __IMG__FILE__ = imread(__SRC__);
		imshow(__SRC__,__IMG__FILE__);
		while(waitKey(25) != __END__KEY__){}
		__IMG__FILE__.release();

	}
	return 0;
}
