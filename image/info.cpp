#include "info.h"

/*author: Paula Kochañska*/

/**
* Informs about properties of matrix/image
*
* @param image - image to work with
*/

void info(Mat mat) {

	int rows = mat.size().height;
	int cols = mat.size().width;
	string depth = getMatDepth(mat);
	string type = getMatType(mat);
	int channels = mat.channels();

	cout << "rows [px]: " << rows << endl;
	cout << "columns [px]: " << cols << endl;
	cout << "depth: " << depth << endl;
	cout << "type: " << type << endl;
	cout << "channels: " << channels << endl;
	cout << endl;
}

/**
* Returns depth of matrix
*
* @param mat - matrix to work with
*/

string getMatDepth(Mat mat)
{
	const int depth = mat.depth();

	switch (depth)
	{
	case CV_8U:  return "CV_8U";
	case CV_8S:  return "CV_8S";
	case CV_16U: return "CV_16U";
	case CV_16S: return "CV_16S";
	case CV_32S: return "CV_32S";
	case CV_32F: return "CV_32F";
	case CV_64F: return "CV_64F";
	default:
		return "Invalid depth of matrix!";
	}
}

/**
* Returns type of matrix
*
* @param mat - matrix to work with
*/

string getMatType(Mat mat)
{
	const int type = mat.type();

	switch (type)
	{
	case CV_8UC1:  return "CV_8UC1";
	case CV_8UC2:  return "CV_8UC2";
	case CV_8UC3:  return "CV_8UC3";
	case CV_8UC4:  return "CV_8UC4";

	case CV_8SC1:  return "CV_8SC1";
	case CV_8SC2:  return "CV_8SC2";
	case CV_8SC3:  return "CV_8SC3";
	case CV_8SC4:  return "CV_8SC4";

	case CV_16UC1: return "CV_16UC1";
	case CV_16UC2: return "CV_16UC2";
	case CV_16UC3: return "CV_16UC3";
	case CV_16UC4: return "CV_16UC4";

	case CV_16SC1: return "CV_16SC1";
	case CV_16SC2: return "CV_16SC2";
	case CV_16SC3: return "CV_16SC3";
	case CV_16SC4: return "CV_16SC4";

	case CV_32SC1: return "CV_32SC1";
	case CV_32SC2: return "CV_32SC2";
	case CV_32SC3: return "CV_32SC3";
	case CV_32SC4: return "CV_32SC4";

	case CV_32FC1: return "CV_32FC1";
	case CV_32FC2: return "CV_32FC2";
	case CV_32FC3: return "CV_32FC3";
	case CV_32FC4: return "CV_32FC4";

	case CV_64FC1: return "CV_64FC1";
	case CV_64FC2: return "CV_64FC2";
	case CV_64FC3: return "CV_64FC3";
	case CV_64FC4: return "CV_64FC4";

	default:
		return "Invalid type of matrix!";
	}
}