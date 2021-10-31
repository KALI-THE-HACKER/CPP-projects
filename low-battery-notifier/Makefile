# ----
# The Makefile - Low Battery Notifier
#
# Author : Rishav Das
# Created on : October 8, 2021
#
# Last modified by : -
# Last modified on : -
#
# ----

CC = gcc
CFLAGS = -x c++ -lstdc++
TARGET = bin/low-batter-notifier

all : $(TARGET)

$(TARGET) : src/*.cpp
	$(CC) src/*.cpp -I include/ $(CFLAGS) -o $(TARGET)
