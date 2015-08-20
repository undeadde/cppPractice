#!/bin/bash
find . -name *.cpp|xargs cat|grep -v ^$|wc -l