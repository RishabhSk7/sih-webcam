#include <opencv2/opencv.hpp>

int main()
{
    cv::VideoCapture cap(0); // Open the default camera (usually webcam 0)

    if (!cap.isOpened())
    {
        std::cerr << "Error: Could not open the camera." << std::endl;
        return -1;
    }

    cv::namedWindow("Webcam", cv::WINDOW_NORMAL);

    while (true)
    {
        cv::Mat frame;
        cap >> frame; // Capture a frame from the camera

        if (frame.empty())
        {
            std::cerr << "Error: Frame is empty." << std::endl;
            break;
        }

        // Display the frame
        cv::imshow("Webcam", frame);

        char key = cv::waitKey(1); // Wait for a key press for 1 millisecond

        // If the user presses 'q' or closes the window, exit the loop
        if (key == 'q' || key == 27) // 27 is the ASCII code for the 'Esc' key
            break;
    }

    // Release the camera and close the OpenCV window
    cap.release();
    cv::destroyAllWindows();

    return 0;
}
