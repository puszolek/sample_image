#include <iostream>
#include <opencv2\highgui\highgui.hpp>
#include <opencv2\core\core.hpp>
#include "info.h"

using namespace std;
using namespace cv;

/*author: Paula Kochañska*/

int main() {

	//read file
	string input = "lena.jpg";
	cout << input << endl;
	const char* file_path = input.c_str();
	Mat mat = imread(file_path, CV_16S);

	//check data
	if (!mat.data) {
		cout << "Could not open or find the image" << endl;
		system("pause");
		return -1;
	}

	//write information about image
	info(mat);
	system("pause");

	//show input image
	imshow(input, mat);
	waitKey(0);

	mat.release();

	destroyAllWindows();
	return 0;
}
