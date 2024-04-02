#ifndef OSCAPTURE_H
#define OSCAPTURE_H
 
#include <opencv2/opencv.hpp>

class OsCapture
{
private:
	cv::Mat image;
	int imageWidth;
	int imageHeight;

public:
	OsCapture(std::string file);

	cv::Mat getImage() const{ return image; }
	int getImageWidth() const { return imageWidth; }
	int getImageHeight() const { return imageHeight; }
};

#endif