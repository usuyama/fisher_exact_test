all:
	g++ -I/Users/usuyama/bin/boost_1_45_0/ -L/Users/usuyama/bin/boost_1_45_0/stage/lib/ fisher.cpp
	g++ -I/Users/usuyama/bin/googletest/include/ test.cpp /Users/usuyama/bin/googletest/libgtest.a /Users/usuyama/bin/googletest/libgtest_main.a -o test

test:
	./test



