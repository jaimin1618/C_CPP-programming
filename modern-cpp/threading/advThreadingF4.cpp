#include <iostream>
#include <string>
#include <thread>
#include <mutex>
using namespace std;

std::mutex mu;

void CallHome(string message) {
  mu.lock();
  cout << "Thread " << this_thread::get_id() << " says " << message << endl;
  mu.unlock();
}

int main() {
  thread t1(CallHome, "[1] Hello from Jupiter");
  thread t2(CallHome, "[2] Hello from Pluto");
  thread t3(CallHome, "[3] Hello from Moon");

  CallHome("[Main] Hello from Main/Earth"); // main thread  

  thread t4(CallHome, "[4] Hello from Uranus");
  thread t5(CallHome, "[5] Hello from Neptune");

  t1.join();
  t2.join();
  t3.join();
  t4.join();
  t5.join();

  return 0;
}