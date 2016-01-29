#include "mykernel2.h"
#include "aux.h"
#include "sys.h"
#include <time.h>
#include <stdlib.h>
#include <string.h>

#ifndef SLACK
#define SLACK 1
#endif

#ifndef LOGIC_IN_HANDLETIMERINTR
#define LOGIC_IN_HANDLETIMERINTR 0
#endif

int inSlackRange(int expected, int actual);
int get_next_sched();
int test_havoc();
