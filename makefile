cc=g++
cv=`pkg-config --cflags --libs opencv4`
libsrc=src/libs/libgfx.cpp
source=src/main.cpp
projectname=opengfx
cflags=-Wall -O2 -o $(projectname)

exe :
	echo "compling main.cpp"
	$(cc) $(source) $(libsrc) $(cflags) $(cv)
run : exe
	./a.out
	
