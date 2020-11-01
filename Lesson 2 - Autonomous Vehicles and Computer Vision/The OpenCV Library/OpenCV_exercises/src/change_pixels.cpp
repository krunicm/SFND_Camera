#include <iostream>
#include <opencv2/core.hpp>
#include <opencv2/highgui.hpp>


using namespace std;

void changePixels()
{
    // create matrix
    int nrows = 480, ncols = 640;
    cv::Mat m1_8u;
    m1_8u.create(nrows, ncols, CV_8UC1); // two-channel matrix with 8bit unsigned elements
    m1_8u.setTo(cv::Scalar(0));          //black

    for (int r = 0; r < ncols; r++){
        m1_8u.at<int>(0, r) = 255;
        cout << "m1_u8 = " << " " << m1_8u.at<int>(0, r) << endl << endl;

    }
    
    // show result
    string windowName = "First steps in OpenCV";
    cv::namedWindow(windowName, 1); // create window
    cv::imshow(windowName, m1_8u);
    cv::waitKey(0); // wait for keyboard input before continuing
}


int main()
{
    changePixels();
    return 0;
}