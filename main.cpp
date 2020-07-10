#include <opencv2/highgui.hpp>
#include <opencv2/videoio.hpp>
#include <iostream>

using namespace cv;
 
int main( int argc, char** argv ) {
  

  VideoCapture cap;

  if(!cap.open(0))
        return 0;
    for(;;)
    {
          Mat frame;
          cap >> frame;
          if( frame.empty() ) break; // end of video stream
          imshow("HACKED...", frame);
          if( waitKey(10) == 27 ) break; // stop capturing by pressing ESC 
    }

  cv::Mat image;
  image = cv::imread("sample.jpeg" , CV_LOAD_IMAGE_COLOR);
  
  if(! image.data ) {
      std::cout <<  "Could not open or find the image" << std::endl ;
      return -1;
    }

  
  cv::namedWindow( "Display window", cv::WINDOW_AUTOSIZE );
  cv::imshow( "Display window", image );
  
  cv::waitKey(0);
  return 0;
}


///////////////////////// Convert Gray Scale /////////////////////
/*#include<opencv2/opencv.hpp>
#include <opencv2/core/cvstd.hpp>
#include<iostream>
using namespace cv;
int main()
{
	cv::String file_name="sample.jpeg";//all these three strings are part of CV and not the C++ library
	cv::String window_original="original_image";
	cv::String window_gray="gray_image";
	cv::Mat img = cv::imread(file_name);//It returns a matrix object
	cv::Mat graymat;
	cv::cvtColor(img, graymat, cv::COLOR_BGR2GRAY);
	cv::namedWindow(window_original,cv::WINDOW_AUTOSIZE);
	cv::imshow(window_original,img);
	cv::namedWindow(window_gray,cv::WINDOW_AUTOSIZE);
	cv::imshow(window_gray,graymat);
	cv::waitKey(0);
	return 0;
}*/
