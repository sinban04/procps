#include <linux/kernel.h>
//#include <asm/current.h>
#include <linux/sched.h>



asmlinkage long sys_state(int pid)
{
  struct task_struct *cur = pid_task(find_vpid(pid), PIDTYPE_PID);
  long state = cur->state;

  return state; 
}
