#include <iostream>
#include <thread>
using namespace std;
static bool s_Finished = false;

void DoWork()
{
	using namespace literals::chrono_literals;
	cout << "Started thread id=" << this_thread::get_id() << endl;
	int w=0;
	while (!s_Finished)
	{   
		w = w + 1;
		cout << "RROOOR  \n";
		cout << w;
		this_thread::sleep_for(1s);

	}
}

int main()
{
	////////////////////////////////////////////////
	thread worker(DoWork);
	cin.get();
	////////////////////////////////////////////////


	s_Finished = true;
	worker.join();
	cout << "Finished" << endl;
	cout << "Started thread id=" << this_thread::get_id() << endl;


	return 0;
}
