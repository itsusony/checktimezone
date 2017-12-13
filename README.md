# checktimezone
timezone tool for linux

it will check the tm_gmtoff, if it is not 32400 sec, this tool will fix /etc/localtime to Asia/Tokyo for you.

# compile
gcc -Wall -o /usr/local/bin/checktimezone_for_jst checktimezone_for_jst.c
