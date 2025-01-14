#include"libgfx.hpp"
#include<opencv2/imgproc.hpp>
#include<iostream>

int  Linktac(const char* __OPTION__,const char* __ADDITION__){
	if(!strcmp(__OPTION__,__IMG__SHOW__)){
		if(!strcmp(__ADDITION__,"-2gray")) return cv::COLOR_BGR2GRAY;
	}
	return -1;
}
