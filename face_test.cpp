#include <iostream>

#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/video/tracking.hpp>
#include <opencv2/imgproc/imgproc.hpp>    
using namespace std;

    int main()
    {
    cv::VideoCapture cap;
    cap.open(0);

    if( !cap.isOpened() )
    {
        std::cerr << "***Could not initialize capturing...***\n";
        std::cerr << "Current parameter's value: \n";
        return -1;
    }

    cv::Mat frame;
   while(1){
        cap >> frame;
        if(frame.empty()){
            std::cerr<<"frame is empty"<<std::endl;
            // break;
        }

        // double val = cap.get(CV_CAP_PROP_FPS);
        // cout << val << endl;

        // double fps = cap.get(CV_CAP_PROP_FPS);
        // cout << "FPS: " << val << endl;        

        cv::imshow("", frame);        
        cv::waitKey(10);
        
        // imwrite("tmp/test.jpg", frame);        
    }

    return 1;
}
