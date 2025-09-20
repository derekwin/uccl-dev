#pragma once
// GPU Thread Block Manager
#include "util/gpu_rt.h"
#include <atomic>
#include <vector>
#include <thread>

class Communicator;

// class TBManager {
//  public:
//   TBManager(Communicator* comm);
//   ~TBManager();

//   void start();
//   void stop();
//   bool running() const { return running_.load(std::memory_order_acquire); }

//  private:
//   void run_loop();

//   Communicator* comm_;
//   std::thread thr_;
//   std::atomic<bool> running_{false};

//   std::vector<gpuStream_t> active_streams;
// };