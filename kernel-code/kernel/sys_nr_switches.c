#include <linux/kernel.h>
//#include <asm/current.h>
#include <linux/sched.h>



asmlinkage long sys_nr_switches(int pid)
{
  struct task_struct *cur = pid_task(find_vpid(pid), PIDTYPE_PID);
  unsigned long nr_switches = cur->nvcsw + cur->nivcsw;

  return nr_switches; 
}
