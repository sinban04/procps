#include <linux/kernel.h>
#include <asm/current.h>
#include <linux/sched.h>

asmlinkage long sys_nr_sibling(int pid)
{
  int i;

  i=0;
  struct task_struct *cur = pid_task(find_vpid(pid), PIDTYPE_PID);
  struct task_struct *iter = cur;
  
  list_for_each_entry(iter, &cur->real_parent->children, sibling){
    i++;
  }
  return i;
}
