      
/** @file test_posix.c
  * @note HangZhou Hikvision Digital Technology Co., Ltd. All Right Reserved.
  * @brief    
  * 
  * @author   liuboyf1
  * @date     2012-10-10
  * @version  V1.0.0
  * 
  * @note ///Description here 
  * @note History:    
  * @note     <author>   <time>    <version >   <desc>
  * @note  
  * @warning  
  */

#include <stdio.h>
#include <limits.h>

int print_const (const char *msg, int val)
{
    printf("%s: %d\n", msg, val);

    return 0;
}

int main (int argc, char const* argv[])
{
    print_const("_POSIX_ARG_MAX", _POSIX_ARG_MAX);
    print_const("_POSIX_CHILD_MAX", _POSIX_CHILD_MAX);
    print_const("_POSIX_LINK_MAX", _POSIX_LINK_MAX);
    print_const("_POSIX_MAX_CANON", _POSIX_MAX_CANON);
    print_const("_POSIX_MAX_INPUT", _POSIX_MAX_INPUT);
    print_const("_POSIX_NAME_MAX", _POSIX_NAME_MAX);
    print_const("_POSIX_NGROUPS_MAX", _POSIX_NGROUPS_MAX);
    print_const("_POSIX_OPEN_MAX", _POSIX_OPEN_MAX);
    print_const("_POSIX_PATH_MAX", _POSIX_PATH_MAX);
    print_const("_POSIX_PIPE_BUF", _POSIX_PIPE_BUF);
    print_const("_POSIX_SSIZE_MAX", _POSIX_SSIZE_MAX);
    print_const("_POSIX_STREAM_MAX", _POSIX_STREAM_MAX);
    print_const("_POSIX_TZNAME_MAX", _POSIX_TZNAME_MAX);

    return 0;
}

