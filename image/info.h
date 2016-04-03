#ifndef info_h
#define info_h

#include <iostream>
#include <opencv2\highgui\highgui.hpp>
#include <opencv2\core\core.hpp>

using namespace cv;
using namespace std;

/*author: Paula Kochañska*/

/*declarations*/

void info(Mat mat);
string getMatDepth(Mat mat);
string getMatType(Mat mat);

#endif