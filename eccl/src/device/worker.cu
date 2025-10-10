

__global__ void persistent_worker(TaskQueue* q, int worker_id) {
  while (true) {
    int task_id = q->acquire_task(worker_id);
    if (task_id < 0) {
      if (q->should_exit()) break;
      continue;
    }

    // 执行任务
    Task t = q->tasks[task_id];
    process_task(t);

    // 标记完成
    q->complete_task(worker_id, task_id);
  }
}
