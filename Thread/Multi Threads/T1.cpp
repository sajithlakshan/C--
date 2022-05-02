
#include <iostream>
#include <ctime>
#include <thread>
#include <ctime>
using namespace std;
using namespace std::chrono;

 
int GetRandom(int max) {
    srand(time(NULL));
    return rand() % max;
}


void ExecuteThread(int id){
    auto nowTime =  system_clock::now();
    time_t sleepTime = system_clock::to_time_t(nowTime);

    tm myLocalTime = *localtime(&sleepTime);

    // Print full time information
    cout << "Thread " << id << " Sleep Time : " << ctime(&sleepTime) << "\n";
    cout << "Month : " << myLocalTime.tm_mon << "\n";
    cout << "Day : " << myLocalTime.tm_mday << "\n";
    cout << "Year : " << myLocalTime.tm_year + 1900 << "\n";
    cout << "Hours : " << myLocalTime.tm_hour << "\n";
    cout << "Minutes : " <<myLocalTime.tm_min << "\n";
    cout << "Seconds : " << myLocalTime.tm_sec << "\n\n";

    // Put the thread to sleep for up to 3 seconds
    this_thread::sleep_for(seconds(GetRandom(3)));
    nowTime = system_clock::now();
    sleepTime =system_clock::to_time_t(nowTime);
    cout << "Thread " << id <<" Awake Time : " << ctime(&sleepTime) << "\n";
}
int main()
{
       thread th1(ExecuteThread, 1);
       th1.join();
       thread th2(ExecuteThread, 2);
       th2.join();
	return 0;
}
