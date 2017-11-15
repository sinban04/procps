#include <linux/kernel.h>
#include <asm/current.h>
#include <linux/sched.h>

asmlinkage long sys_realcpu(int pid)
{

  struct task_struct *cur = pid_task(find_vpid(pid), PIDTYPE_PID); 

  int ncpu = cur->cpu;


  return ncpu;
}
