#include <linux/kernel.h>
#include <linux/sched.h>
#include "sched/sched.h"

asmlinkage long sys_nr_running(int pid)
{
  struct task_struct *cur = pid_task(find_vpid(pid), PIDTYPE_PID);
  struct rq* runqueue = task_rq(cur);
  printk("prcess: %d, cpu: %d, runqueue: %p nr_run: %d rq_cpu: %d \n", pid, cur->cpu, runqueue, runqueue->nr_running, runqueue->cpu);

  return runqueue->nr_running;
}
