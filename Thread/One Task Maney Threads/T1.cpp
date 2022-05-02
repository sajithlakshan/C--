
#include <iostream>
#include <ctime>
#include <thread>
#include <ctime>
#include <mutex>
using namespace std;
using namespace std::chrono;

 
string GetTime() {
    auto nowTime = system_clock::now();
    time_t sleepTime = system_clock::to_time_t(nowTime);
    return ctime(&sleepTime);
}

double acctBalance = 100;
mutex acctLock;

void GetMoney(int id, double withdrawal) {


    lock_guard<mutex> lock(acctLock);
    this_thread::sleep_for(seconds(3));

    cout << id <<" tries to withdrawal $" << withdrawal << " on " << GetTime() << "\n";
        
        
       

    if ((acctBalance - withdrawal) >= 0) {
        acctBalance -= withdrawal;
        cout << "New Account Balance is $" <<acctBalance << "\n";
            
    }
    else {
        cout << "Not Enough Money in Account\n";
        cout << "Current Balance is $" <<acctBalance << "\n";
            
    }
    // acctLock.unlock();
}
int main()
{
    thread threads[10];

    for (int i = 0; i < 10; ++i) {
        threads[i] = thread(GetMoney, i, 15);
    }

    for (int i = 0; i < 10; ++i) {
        threads[i].join();
    }
	return 0;
}
