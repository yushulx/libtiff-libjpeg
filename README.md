# Building Libtiff with Libjpeg on Windows

## Prerequisites
- Visual Studio
- [CMake](https://cmake.org/download/)
- [Libjpeg](http://gnuwin32.sourceforge.net/packages/jpeg.htm)

## How to Build Libtiff
Generate configuration files.

```
mkdir buildx86
cd buildx86
cmake -DJPEG_LIBRARY:PATH=[libjpeg]/lib/jpeg.lib -DJPEG_INCLUDE_DIR:PATH=[libjpeg]/include/ ..
```

![libtiff libjpeg config](http://www.codepool.biz/wp-content/uploads/2018/04/libtiff-libjpeg-config.PNG)


Build the library.

```
cmake --build . --config Release
cd buildx86\libtiff\Release
```

## How to Run the Demo

```
mkdir build
cd build
cmake ..
cmake --build . --config Release
.\Release\demo.exe [TIFF file]
```

![libtiff libjpeg](http://www.codepool.biz/wp-content/uploads/2018/04/libtiff-libjpeg.PNG)

## References
- [Using The TIFF Library](http://www.libtiff.org/libtiff.html)
- [TIFFGetField](http://www.libtiff.org/man/TIFFGetField.3t.html)

## Blog
[Building LibTIFF with LibJPEG on Windows](http://www.codepool.biz/building-libtiff-libjpeg-windows.html)
