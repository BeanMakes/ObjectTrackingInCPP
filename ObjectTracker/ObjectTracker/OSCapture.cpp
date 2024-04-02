#include "OSCapture.h"

OsCapture::OsCapture(std::string file)
	: image{ cv::imread(file) }
	, imageWidth{image.cols}
	, imageHeight{image.rows}

{
}