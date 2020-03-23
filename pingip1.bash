#!/bin/bash
#
declare $i
ping1(){
if [ ping -w 1 -c 1 $i &>/dev/null ];then
	echo "ip is \033[33m $i \033[0m is up"
else
	echo "ip is \033[32m $i \033[0m is down"
fi
}
for i in [200..255];do
ping1 $i
done


