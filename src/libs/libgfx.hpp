#ifndef LIBGFX_HPP
	#define LTBGFX_HPP
	#ifndef HIGHGUI_H
		#define HIGHGUI_H
		#include<opencv2/highgui.hpp>
	
	#endif


	#define __INSTALL__COMMAND__ "OpenGFXInstall"
	#define __INSTALL__COMMAND__LINUX__  "echo 'export PATH=~/OpenGFX:$PATH' >> ~/.bashrc"
	#define __RESTART__BASH__ "source ~/.bashrc"
	#define __END__KEY__ (int)'x'	
	// ---------------DEFINE OPTION ----------------
	#define __IMG__SHOW__ "-openimg" 
	int  Linktac(const char** ,const char**);
#endif
