
###############################################################################
# @file Makefile
# @note HangZhou Hikvision Digital Technology Co., Ltd. All Right Reserved.
# @brief Client Makefile
# 
# @author   liuboyf1
# @data     2012-09-14
# @version  V1.0.0
###############################################################################

SRCS = $(wildcard *.c) # 当前目录下所有以,c结尾的源文件
OBJS = $(SRCS:.c = .o) # 将SRCS里面所有.c文件编译出来的.o目标文件

# The prefix to be added before the GNU compiler tools (optionally including
# path), i.e. "arm-linux-" or "/opt/bin/arm-linux-".
#TOOL_DIR = /opt/v5t_le-mv401_uc
# 交叉编译工具
#TOOL_PREFIX = $(TOOL_DIR)/bin/arm_v5t_le-

CC = $(TOOL_PREFIX)gcc

# 包含的头文件，和非系统链接库
#INCLUDES = -I/xxx 
LIBS = -lpthread

CFLAGS = -g -Wall -O2

# Comment/uncomment the following line to enable/disable debugging
#DEBUG = y
ifeq ($(DEBUG),y)
	DEBFLAGS = -O -g # "-O" is needed to expand inlines
	DEBFLAGS += -DDEBUG_PRINT # 控制是否打印信息
else
	DEBFLAGS = -O2
endif

PWD := $(shell pwd)

# 生成的可执行文件名称
TARGET = client_tool
$(TARGET) : $(OBJS)
	$(CC) $^ -o $@ $(INCLUDES) $(LIBS)
	cp $(TARGET) $(PWD)/..

%.o : %.c
	$(CC) -c $< $(CFLAGS) $(DEBFLAGS)

clean :
	rm -f *.o $(TARGET)

.PHONY : clean
