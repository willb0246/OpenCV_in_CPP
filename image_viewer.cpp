#include <opencv2/imgcodecs.hpp> 
#include <opencv2/highgui.hpp>

int main()
{
	cv::Mat picture = cv::imread("HelloWorld.jpg");
	cv::imshow("title", picture);
	cv::waitKey(0);

}