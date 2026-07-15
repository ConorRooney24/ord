all: install

install:
	cp -r include/ord /usr/local/include/

uninstall:
	rm -f /usr/local/lib/libord.a
	rm -rf /usr/local/include/ord
