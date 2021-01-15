#include <opencv2/opencv.hpp>
#include <opencv2/highgui.hpp>
#include <iostream>

using namespace cv;
using namespace std;

int main(int argc, char* argv[]){
	VideoCapture capture(0);
	if (capture.isOpened() == false) {
		cout << "Cannot open camera" << endl;
		cin.get();
		return -1;
	}

	double dWidth = capture.get(CAP_PROP_FRAME_WIDTH);
	double dHeight = capture.get(CAP_PROP_FRAME_HEIGHT);
	string window_name = "My Camera Output";
	namedWindow(window_name);

	while (true) {
		Mat frame;
		capture >> frame;
		flip(frame, frame, 1);

		imshow(window_name, frame);
		if (waitKey(10) == 27) {
			cout << "Ect key was pressed, stopping script" << endl;
			break;
		}

	}
}