#include<opencv2/opencv.hpp>

using namespace cv;
using namespace std;

int main()
{
	VideoCapture cap;
	 
	cap.open(0);

	double fps = cap.get(CAP_PROP_FPS);
	std::cout << "fps" << fps << std::endl;
	
	while (1)
	{
		cv::Mat frame;
		bool rSucess = cap.read(frame);
		if (!rSucess)
		{
			std::cout<<"���ܴ���Ƶ�ж�ȡ֡"<< std::endl;
			break;
		}
		else
		{
			cv::imshow("frame", frame);
		}
		waitKey(30);
	}


}