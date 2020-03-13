//二值化算法
#include <iostream>
#include <opencv2/opencv.hpp>

using namespace cv;
using namespace std;

int main() {
	cv::Mat srcMat = imread("E:\\Git\\bei.jpg",0);
	cv::Mat result_1;
	cv::Mat result_2;
	threshold(srcMat, result_1, 100, 255, THRESH_OTSU);
	adaptiveThreshold(srcMat, result_2, 255, ADAPTIVE_THRESH_GAUSSIAN_C, THRESH_BINARY_INV, 15, 10);
	cv::imshow("原图", srcMat);
	cv::imshow("全局二值化", result_1);
	cv::imshow("局部二值化", result_2);
	waitKey(0);
}




