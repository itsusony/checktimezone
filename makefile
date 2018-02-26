bin:
	gcc -Wall -o checktimezone_for_jst checktimezone_for_jst.c
install:
	mv checktimezone_for_jst /usr/local/bin/checktimezone_for_jst
clean:
	rm -f checktimezone_for_jst
